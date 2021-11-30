all: a.out

a.out: driver.o test.o
	g++ -o a.out driver.o test.o

test.o: test.cpp
	g++ -c -o test.o test.cpp -I .

driver.o: driver.c driver.h
	gcc -c -o driver.o driver.c -I .