CC       := g++
CFLAGS   := -Wall -std=c++17
LFLAGS 	 := -lstdc++
RM       := rm -f

INCDIR :=
LIBDIR :=

OBJS := main.o order.o operation.o

all: main

main: $(OBJS)
	$(CC) $(OBJS) $(LIBDIR) -o main $(LFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCDIR) -c main.cpp

order.o: order.cpp
	$(CC) $(CFLAGS) $(INCDIR) -c order.cpp

operation.o: operation.cpp
	$(CC) $(CFLAGS) $(INCDIR) -c operation.cpp

clean:
	$(RM) *.o
	$(RM) main