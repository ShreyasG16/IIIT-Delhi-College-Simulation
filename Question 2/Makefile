CC = g++
CFLAGS = -std=c++11

all: debug optimized

# Debug version with -g flag
debug: CFLAGS += -g
debug: question2_debug

# Optimized version with -O2 flag
optimized: CFLAGS += -O2
optimized: question2_optimized

# Build debug binary
question2_debug: main.o AdminStructure.o Department.o Member.o Utils.o
	$(CC) $(CFLAGS) -o question2_debug main.o AdminStructure.o Department.o Member.o Utils.o

# Build optimized binary
question2_optimized: main.o AdminStructure.o Department.o Member.o Utils.o
	$(CC) $(CFLAGS) -o question2_optimized main.o AdminStructure.o Department.o Member.o Utils.o

# Object file rules
main.o: main.cpp include/AdminStructure.h include/Department.h include/Member.h include/Utils.h
	$(CC) $(CFLAGS) -c main.cpp

AdminStructure.o: src/AdminStructure.cpp include/AdminStructure.h
	$(CC) $(CFLAGS) -c src/AdminStructure.cpp

Department.o: src/Department.cpp include/Department.h include/Member.h
	$(CC) $(CFLAGS) -c src/Department.cpp

Member.o: src/Member.cpp include/Member.h
	$(CC) $(CFLAGS) -c src/Member.cpp

Utils.o: src/Utils.cpp include/Utils.h
	$(CC) $(CFLAGS) -c src/Utils.cpp

# Clean target for removing binaries and object files
clean:
ifeq ($(OS),Windows_NT)
	del /F /Q *.o question2_debug.exe question2_optimized.exe
else
	rm -f *.o question2_debug question2_optimized
endif
