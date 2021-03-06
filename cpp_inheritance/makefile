user: main.o user.o teacher.o
	g++ main.o user.o teacher.o -o user

main.o: main.cpp
	g++ -c -std=c++11 main.cpp 

user.o: user.cpp
	g++ -c -std=c++11 user.cpp 

teacher.o: teacher.cpp
	g++ -c -std=c++11 teacher.cpp 

clean:
	rm *.o user