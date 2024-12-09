test:
	clang main.c -o main
all:
	clang *.c -o main

debug:
	clang *.c -o main -DDEBUG_TRACE -DDEBUG_PRINT

clean:
	rm main
