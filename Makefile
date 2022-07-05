main: main.o account.o 
	g++ -o main main.o account.o 

account.o: account.cpp account.h
main.o: main.cpp account.h

clean: 
	rm -f main main.o account.o