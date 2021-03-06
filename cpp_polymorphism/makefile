user: main.o user.o teacher.o student.o
	g++ main.o user.o teacher.o student.o -o user

main.o: main.cpp
	g++ -c -std=c++11 main.cpp 

user.o: user.cpp user.h
	g++ -c -std=c++11 user.cpp 

teacher.o: teacher.cpp teacher.h
	g++ -c -std=c++11 teacher.cpp 

student.o: student.cpp student.h
	g++ -c -std=c++11 student.cpp 


clean:
	rm *.o user