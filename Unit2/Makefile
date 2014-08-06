BIN = main
OBJECTS = Observer.o Subject.o main.o
CXX = g++
CXXFLAGS = -g
INCLUDE = Observer.h Subject.h

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) $(OBJECTS) core.*
	
