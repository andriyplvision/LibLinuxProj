all: calculator

calculator: main.c libcalc.a
	gcc main.c -L . -l calc -o calculator -lm
libcalc.a: add.c d.c minus.c mul.c p.c s.c
	gcc -c add.c d.c minus.c mul.c p.c s.c
	ar -rc libcalc.a *.o
	ranlib libcalc.a
clean:
	rm *.o libcalc.a calculator
