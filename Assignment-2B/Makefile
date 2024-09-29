# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -g
# Source files
SRCS = Book.cpp classFunctions.cpp functions.cpp Journals.cpp Library.cpp LibraryItem.cpp main.cpp PublicationRank.cpp User.cpp
# Object files
OBJS = $(SRCS:.cpp=.o)
# Executable name
TARGET = library_system.exe

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each source file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up generated files (use del for Windows)
clean:
	del /Q $(OBJS) $(TARGET)

.PHONY: all clean
