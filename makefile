all: libclassrec.so libclassloops.so libclassloops.a libclassrec.a loops recursives looped recursived
loops: main.o libmylib.a
	gcc -Wall -g -o progmains main.o libmylib.a
recursives: main.o
	gcc -Wall -g -o progmaind main.o ./libclassloops.so
	recursives: main.o
		gcc -Wall -g -o progmaind main.o ./libclassrec.so
libclassloops.so: mylib.o
	gcc -shared -o libmylib.so mylib.o
libclassloops.a : mylib.o
	ar -rcs libmylib.a mylib.o
mylib.o: mylib.c mylib.h
	gcc -Wall -g -c mylib.c
main.o: main.c mylib.h
	gcc -Wall -g -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains progmaind
