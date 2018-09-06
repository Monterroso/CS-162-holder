wc: wc.o

main: main.o

map: map.o

map.o: map.c
	g++ -c map.c

main.o: main.c
	g++ -c main.c

wc.o: wc.c
	g++ -c wc.c
