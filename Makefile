.PHONY: all
all: quine.c quine.1.c
	sha256sum quine.c quine.1.c

quine.1.c: quine.c
	cc -Wall -Wextra -o quine quine.c
	./quine > quine.1.c

quine.c: template.c generate.py
	python3 generate.py template.c > quine.c
