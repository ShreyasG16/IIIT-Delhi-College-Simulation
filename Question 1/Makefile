CXX = g++
CXXFLAGS = -Wall -g -I./include

CXXFLAGS_RELEASE = -Wall -O3 -I./include

SOURCES = main.cpp Department.cpp AdminStructure.cpp Member.cpp Utils.cpp Person.cpp

OBJECTS = $(SOURCES:.cpp=.o)

TARGET_DEBUG = question1_debug
TARGET_RELEASE = question1_optimized

all: $(TARGET_DEBUG) $(TARGET_RELEASE)

$(TARGET_DEBUG): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(TARGET_RELEASE): $(OBJECTS)
	$(CXX) $(CXXFLAGS_RELEASE) -o $@ $^

%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q *.o $(TARGET_DEBUG).exe $(TARGET_RELEASE).exe

.PHONY: all clean
