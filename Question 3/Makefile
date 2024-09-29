CXX = g++
CXXFLAGS = -Wall -std=c++11

# Default target that builds both debug and release binaries
all: debug optimized

# Debug version
debug: CXXFLAGS += -g
debug: question3_debug

# Optimized version
optimized: CXXFLAGS += -O2
optimized: question3_optimized

# Rule to create the debug binary
question3_debug: main.o
	$(CXX) $(CXXFLAGS) -o question3_debug main.o

# Rule to create the optimized binary
question3_optimized: main.o
	$(CXX) $(CXXFLAGS) -o question3_optimized main.o

# Object file rule for main.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Clean target to remove binaries and object files
clean:
	@if exist question3_debug.exe (del /f question3_debug.exe) else (echo "No debug executable to delete")
	@if exist question3_optimized.exe (del /f question3_optimized.exe) else (echo "No optimized executable to delete")
	@if exist main.o (del /f main.o) else (echo "No object file to delete")
