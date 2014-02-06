%.pdf: %.tex
	pdflatex $*.tex 
	pdflatex $*.tex
	rm -f ./*.aux
	rm -f ./*.log
	rm -f ./*.out
	rm -f ./*.fls
	rm -f ./*.fdb_latexmk
	rm -f ./*.synctex.tg
	rm -f ./*.tex~
