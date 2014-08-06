BIN = main
CXX = g++
CXXFLAGS = -g
INCLUDE = duck.h behavior.h

all: $(BIN)

$(BIN): %: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) *.o core.*
	
