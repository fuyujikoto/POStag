CC = g++
CXXFLAGS = -Wall -g
OBJS = main.o pos.o

a.out:	$(OBJS)
				$(CC) $(OBJS)

clean:
				rm -f *~ *.o a.out
