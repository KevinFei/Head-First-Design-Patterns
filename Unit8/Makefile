BIN = main
OBJECTS = CaffeineBeverageWithHook.o main.o
CXX = g++
CXXFLAGS = -g

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) $(OBJECTS) core.*
	
