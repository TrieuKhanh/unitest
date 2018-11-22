# makefile created by pham son tung

PROG = adder
TEST = adder_tester
CC = g++
CPPFLAGS = -g -Wall 
LDFLAGS = -lcppunit
OBJS = main.o add.o
OBJS_TESTER = adder_tester.o #testmain.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : 
	$(CC) $(CPPFLAGS) -c main.cpp

add.o : add.hpp
	$(CC) $(CPPFLAGS) -c add.cpp

clean:
	rm -f core $(PROG) $(OBJS) $(TEST) $(OBJS_TESTER) *.gch

#.PHONY: addertester

#addertester: adder_tester
#	./adder_tester

#$(TEST): $(OBJS_TESTER)
#	$(CC) $(LDFLAGS) -o $(TEST) $(OBJS_TESTER)

#adder_tester.o:
#	$(CC) $(CPPFLAGS) -c adder_tester.cpp

$(TEST): 
	$(CC) $(CPPFLAGS) add.cpp adder_tester.cpp $(LDFLAGS) -o $(TEST)

#testmain.o:
#	$(CC) $(CPPFLAGS) -c testmain.cpp


