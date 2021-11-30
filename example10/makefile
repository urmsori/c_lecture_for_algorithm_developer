all: a.out

a.out: driver.o unittest.o
	g++ -o a.out driver.o unittest.o

unittest.o: unittest.cpp
	g++ -c -o unittest.o unittest.cpp -I .

driver.o: driver.c driver.h
	gcc -c -o driver.o driver.c -I .