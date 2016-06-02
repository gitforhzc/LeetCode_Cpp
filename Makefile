CPP=g++
C11FLAGS= -g -Wall -std=c++11
SRCDIR = ./src
DEMODIR = $(SRCDIR)/demo
INCLUDEDIR = -I./include -I
LIBS = -lm

PROGRAMS = array_demo

.PHONY: all
all: $(PROGRAMS)
	
array_demo : $(SRCDIR)/ArrayAlgo.cpp $(DEMODIR)/array_demo.cpp
	$(CPP) $(C11FLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

.PHONY: clean
clean : 
	rm -f $(PROGRAMS)