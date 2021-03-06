math: math_pgm.o math_utils.o
	g++ math_pgm.o math_utils.o -o math

math_pgm.o: math_pgm.cpp
	g++ -c math_pgm.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

clean:
	rm *.o math