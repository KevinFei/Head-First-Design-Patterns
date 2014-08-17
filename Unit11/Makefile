BIN = main
OBJECTS = PersonBean.o Proxy.o main.o
CXX = g++
CXXFLAGS = -g

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) $(OBJECTS) core.*
	
