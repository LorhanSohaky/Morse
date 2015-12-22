all: Morse.o Teste

Teste:main.o Morse.o
	gcc -Wall -o Teste.exe main.o Morse.o

main.o:main.c ../src/Morse.h
	gcc -c main.c -I../src

Morse.o:../src/Morse.c ../src/Morse.h
	gcc -c ../src/Morse.c -I../src
	
clean:
	rm -rf *.o
