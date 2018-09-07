all: main map wc

main: main.o
main.o: main.c
	g++ -c main.c


map: map.o
map.o: map.c
	g++ -c map.c

wc: wc.o
wc.o: wc.c
	g++ -c wc.c

clean:
	rm map.o wc.o main.o
	
