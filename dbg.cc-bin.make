BASIC_FLAGS = -W -Wall -Wextra -std=c++11 -g -pedantic
DEBUG_FLAGS = -DEBUG
%.bin: %.cc
	clang++  $(BASIC_FLAGS) $(DEBUG_FLAGS) -o $*.bin $*.cc
