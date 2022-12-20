
ma: main
	clear
	./main

up: u
	clear
	./unstable

sta: s
	clear
	./stable

main: main.c
	gcc -o main main.c

u: unstable.c
	gcc -o unstable unstable.c

s: stable.c
	gcc -o stable stable.c

clean:
	rm -r main unstable stable
