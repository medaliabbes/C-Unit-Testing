

CC = gcc
CFLAG = -Wall 
INC = ../inc

main : main.c logic.o
	$(CC) $(CFLAG) main.c logic.o -I $(INC) -o main 

logic.o : logic.c
	$(CC) $(CFLAG) -c logic.c -I $(INC) -o logic.o

test_unit : test_unit.c logic.o
	$(CC) $(CFLAG) test_unit.c logic.o -I $(INC) -o test_unit 

clean :
	rm -f *.o main test_unit


