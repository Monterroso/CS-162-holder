all: main map wc

main: main.o
main.o: main.c
	cc -c main.c


map: map.o
map.o: map.c
	cc -c map.c

wc: wc.o
wc.o: wc.c
	c -c wc.c

clean:
	rm map.o wc.o main.o
	
