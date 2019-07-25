CFLAGS=-lSDL2 -lGL -lGLEW

Trapezoid: Trapezoid.o Debug.o
	g++ -o bin/trap Trapezoid.o Debug.o

Trapezoid.o: Trapezoid.cpp Debug.h
	g++ -c Trapezoid.cpp

Debug.o: Debug.cpp Debug.h
	g++ -c Debug.cpp

clean:
	rm -f *.o
