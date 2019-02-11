# Makefile to compile Umix Programming Assignment 3 (pa3) [updated: 1/4/18]
LIBDIR = $(UMIXPUBDIR)/lib
TESTSDIR = $(HOME)/pa3/Tests

CC 	= cc 
FLAGS 	= -g -L$(LIBDIR) -lumix3

PA3 =	pa3a pa3b pa3c pa3d
TESTS = t1 t2 t3 t4 t5 t6 t7 t8

pa3:	$(PA3)

test: $(TESTS)

pa3a:	pa3a.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o pa3a pa3a.c mycode3.o

pa3b:	pa3b.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o pa3b pa3b.c mycode3.o

pa3c:	pa3c.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o pa3c pa3c.c mycode3.o

pa3d:	pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o pa3d pa3d.c mycode3.o

mycode3.o:	mycode3.c aux.h sys.h mycode3.h
	$(CC) $(FLAGS) -c mycode3.c

clean:
	rm -f *.o $(PA3) $(TESTS)

t1:	$(TESTSDIR)/t1.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t1 $(TESTSDIR)/t1.c mycode3.o

t2:	$(TESTSDIR)/t2.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t2 $(TESTSDIR)/t2.c mycode3.o

t3:	$(TESTSDIR)/t3.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t3 $(TESTSDIR)/t3.c mycode3.o

t4:	$(TESTSDIR)/t4.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t4 $(TESTSDIR)/t4.c mycode3.o

t5:	$(TESTSDIR)/t5.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t5 $(TESTSDIR)/t5.c mycode3.o
	
t6:	$(TESTSDIR)/t6.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t6 $(TESTSDIR)/t6.c mycode3.o

t7:	$(TESTSDIR)/t7.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t7 $(TESTSDIR)/t7.c mycode3.o
	
t8:	$(TESTSDIR)/t8.c pa3d.c aux.h umix.h mycode3.o
	$(CC) $(FLAGS) -o t8 $(TESTSDIR)/t8.c mycode3.o
