OBJECTS=main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
HEADERS=box.h checkerboard.h cross.h lower.h upper.h trapezoid.h checkerboard3x3.h

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

main.o: main.cpp $(HEADERS)

box.o: box.cpp box.h

checkerboard.o: checkerboard.cpp checkerboard.h

cross.o: cross.cpp cross.h

lower.o: lower.cpp lower.h

upper.o: upper.cpp upper.h

trapezoid.o: trapezoid.cpp trapezoid.h

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h

clean:
	rm -f $(OBJECTS)