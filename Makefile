CC = g++
OBJ = test01
SRC += test01.cpp
INC += 


$(OBJ):$(SRC)
	$(CC) $(SRC) -o $@
