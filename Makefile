.PHONY: clean
# phony targets (https://habr.com/ru/post/211751/)

prog: main.c stack.o
	gcc -Wall main.c stack.o -o prog
stack.o: stack.h stack.c
	gcc -Wall -c stack.c -o stack.o

clean:
	rm main.o stack.o
