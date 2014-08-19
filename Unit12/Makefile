BIN = main
OBJECTS = AbstractDuckFactory.o GooseAdapter.o \
		  Observer.o Quackable.o QuackObservable.o main.o
CXX = g++
CXXFLAGS = -g

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) $(OBJECTS) core.*
	
