CXX        ?= clang++
CXXFLAGS   ?= -std=c++11 -stdlib=libc++ -Wall -Wextra -Wno-trigraphs -Wno-unused-variable -g
LDFLAGS    ?= -lpthread -Wl,-O1 -Wl,--as-needed


all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))

%.out: %.cpp Makefile
	    $(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f *.out
