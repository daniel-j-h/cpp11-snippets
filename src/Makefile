CXX        ?= clang++
CXXFLAGS   ?= -std=c++11 -stdlib=libc++ -Wall -Wextra -Wno-trigraphs -Wno-unused-variable -g


all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))

%.out: %.cpp Makefile
	    $(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f *.out
