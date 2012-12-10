TARGET=Prog3.pdf
SRC = sections/*.tex header/header.tex 
LL=latexmk -pdf
CLEAN=latexmk -C

all: revision.tex $(TARGET)

pdf: revision.tex $(TARGET)

.PHONY : clean revision.tex $(TARGET)

revision.tex:
	echo "\\newcommand{\\revision}{`git show-ref refs/heads/master | cut -d " " -f 1 | cut -c 1-7`}" > revision.tex


$(TARGET): $(TARGET:%.pdf=%.tex) $(SRC)
	$(LL) $<

clean:
	$(CLEAN)

run:
	xdg-open $(TARGET)

