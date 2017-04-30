
main: main.o succ.o
	g++ -o main main.o succ.o

main.o: main.cpp succ.cpp succ.h
	g++ -c main.cpp -o main.o

succ.o: succ.cpp succ.h
	g++ -c succ.cpp -o succ.o
	
