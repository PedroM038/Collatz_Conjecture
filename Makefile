# Compiler

CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = collatz

SRCS = collatz.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean