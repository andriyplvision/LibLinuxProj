all: converter

converter: main.c libconv.so
	gcc main.c -L . -l conv -o converter
libconv.so: lower.o upper.o
	gcc -shared -o libconv.so *.o
*.o:
	gcc -Wall -fpic -c lower.c upper.c
install: libconv.so
	cp libconv.so /usr/lib
	chmod 0755 /usr/lib/libconv.so
	ldconfig
clean:
	rm *.o libconv.so converter
	rm /usr/lib/libconv.so
