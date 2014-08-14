BIN = main
OBJECTS = Iterator.o MenuItem.o Waitress.o main.o
CXX = g++
CXXFLAGS = -g

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) $(OBJECTS) core*
	
