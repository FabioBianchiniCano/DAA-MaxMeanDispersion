CXX=g++
CFLAGS=-I../lib -std=c++11 -g -O2
LDFLAGS=-g -O2

SDIR=../src
IDIR=../lib
ODIR=../obj


_OBJ = $(ODIR)/edge.o $(ODIR)/node.o $(ODIR)/graph.o $(ODIR)/main.o
# _OBJ = $(ODIR)/main.o

all: main

$(ODIR)/edge.o: $(SDIR)/edge.cpp $(IDIR)/edge.h
	$(CXX) -c -o $@ $< $(CFLAGS)

$(ODIR)/node.o: $(SDIR)/node.cpp $(IDIR)/node.h $(ODIR)/edge.o
	$(CXX) -c -o $@ $< $(CFLAGS)

$(ODIR)/graph.o: $(SDIR)/graph.cpp $(IDIR)/graph.h $(ODIR)/node.o $(ODIR)/edge.o
	$(CXX) -c -o $@ $< $(CFLAGS)

$(ODIR)/strategy.o: $(IDIR)/strategy.h
	$(CXX) -c -o $@ $< $(CFLAGS)

$(ODIR)/context.o: $(IDIR)/context.h $(IDIR)/strategy.h
	$(CXX) -c -o $@ $< $(CFLAGS)

$(ODIR)/main.o: $(SDIR)/main.cpp $(ODIR)/graph.o $(ODIR)/node.o $(ODIR)/edge.o $(ODIR)/context.o $(ODIR)/strategy.o
	$(CXX) -c -o $@ $< $(CFLAGS)

main: $(_OBJ)
	$(CXX) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY : clean

clean:
	rm -f $(ODIR)/*.o
