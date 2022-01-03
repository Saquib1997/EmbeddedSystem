all: piddemo

piddemo:  piddemo.o	
	gcc -o piddemo.o piddemo

piddemo.o: piddemo.c	
	gcc -c -o piddemo.o piddemo.c

clean: 
	rm -rf *.o piddemo