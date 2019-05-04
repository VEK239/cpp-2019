all: result
result: main.o hello.o here.o bye.o
	g++ -o result main.o hello.o here.o bye.o
main.o: main.cpp mylib.h
	g++ -c main.cpp 

hello.o: hello.cpp mylib.h
	g++ -c hello.cpp

here.o: here.cpp mylib.h
	g++ -c here.cpp

bye.o: bye.cpp mylib.h
	g++ -c bye.cpp
clean: 
	rm -rf *.o result