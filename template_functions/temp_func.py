import subprocess
import sys
import os
import os.path
import shutil

TEMPLATES_DIR = os.path.join(os.environ['HOME'],'.templates')
# here comes dirty hack, but I love it :D
from_to = {
    'cc': ('bin',), 
    'tex': ('pdf',),
}


def print_usage(*args, **kwargs):
    print("""Usage:
    tf (function_name) arg1 arg2...""")
    exit()


def copy(src, dst):
    """Copy `src` to `dst`. Creates all necessary directories."""
    if not os.path.exists(os.path.dirname(dst)):
        os.makedirs(os.path.dirname(dst))
    shutil.copy(src, dst)            


def template_new(target_filename, template_name='default'):
    """Copy template from `TEMPLATE_DIR` to target directory.
        Template is chosen by extension of `target_filename`."""
    extension = os.path.basename(target_filename).split(".")[-1]
    template_filename = "{0}.{1}".format(template_name, extension) 
    copy(os.path.join(TEMPLATES_DIR, template_filename), os.path.abspath(target_filename))          


def template_make(source_filename, template_name='default'):
    """Compile `source_filename`."""
    source_name, source_ext = ".".join(source_filename.split(".")[:-1]), source_filename.split(".")[-1]
    for target_ext in from_to[source_ext]:
        subprocess.call(( 'make', '-f', os.path.join(TEMPLATES_DIR, 
            "{0}.{1}-{2}.make".format(template_name, source_ext, target_ext)), 
            "{0}.{1}".format(source_name, target_ext))) 


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print_usage()
    {
        'new': template_new,
        'make': template_make,
    }.get(sys.argv[1], print_usage)(*sys.argv[2:])
