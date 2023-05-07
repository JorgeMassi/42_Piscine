AOUT = bsq
COMPILADOR = gcc
MOULINETTE = -c -Werror -Wall -Wextra
SOURCES = main.c basicos.c basicos2.c converter_mapa.c ler_ficheiro.c quadrados.c
DELETAVEL = main.o basicos.o basicos2.o converter_mapa.o ler_ficheiro.o quadrados.o

all: $(AOUT)

$(AOUT):
	$(COMPILADOR) $(MOULINETTE) -I includes $(SOURCES)
	$(COMPILADOR) -o $(AOUT) $(DELETAVEL)

clean:
	rm -f mapapiqueno.txt mapamega.txt mapaMedio.txt mapaHUGE.txt
	rm -f $(DELETAVEL)

fclean: clean
	rm -f $(AOUT)

re: fclean all

run: fclean all grid
	./bsq mapapiqueno.txt 12 23 32

grid:
	perl gerador_mapa.pl 1 1 0 > mapa1.txt
	perl gerador_mapa.pl 1 1 1 > mapa2.txt
	perl gerador_mapa.pl 5 5 0 > mapa3.txt
	perl gerador_mapa.pl 8 8 4 > mapa4.txt
	perl gerador_mapa.pl 100 100 3 > mapa5.txt
	perl gerador_mapa.pl 1000 1000 900 > mapa6.txt
