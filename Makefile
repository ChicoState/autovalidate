CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -Werror
TARGET := autovalidate
SRC := main.cpp

.PHONY: all build test clean
all: build
build: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	$(RM) $(TARGET)
