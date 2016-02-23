CXX		= g++
CXXFLAGS 	= -std=c++11 -Wall -Wextra
VALGRIND  = valgrind

CPP_FILES = src/main.cpp
OBJ_FILES = obj/main.o

HPP_PATH  = hdr
CPP_PATH  = src

all:
	$(CXX) $(CXXFLAGS) -I$(HPP_PATH) -I$(CPP_PATH) $(CPP_FILES) -o$(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

valgrind: all
	$(VALGRIND) ./$(OBJ_FILES)
