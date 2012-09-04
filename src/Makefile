CXX        ?= clang++
CXXFLAGS   ?= -std=c++11 -stdlib=libc++ -Wall -Wextra -Wno-trigraphs -Wno-unused-variable -g
LDFLAGS    ?= -lpthread


all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))

%.out: %.cpp Makefile
	    $(CXX) $(CXXFLAGS) $(LDFLAGS) $< -o $@

clean:
	rm -f *.out
