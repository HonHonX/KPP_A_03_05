default: alterszuordnung

alterszuordnung.o: alterszuordnung.c
	gcc -c alterszuordnung.c -o alterszuordnung.o

alterszuordnung: alterszuordnung.o
	gcc alterszuordnung.o -o alterszuordnung

clean:
	-rm -f alterszuordnung.o
	-rm -f alterszuordnung
