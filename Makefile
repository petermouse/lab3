all:A.o
	g++ -o A A.o
A.o:A.cpp
	g++ -c A.cpp
clean:
	rm *.o 
