PDFS = 0.pdf 1.pdf 223.pdf 4A5.pdf

pdf:$(PDFS)
	make clear

clear:
	rm -f pdf/*.log
	rm -f pdf/*.aux
	rm -f documents/*~

%.pdf:documents/%.tex
	cd documents && xelatex -output-directory=../pdf ../$<
