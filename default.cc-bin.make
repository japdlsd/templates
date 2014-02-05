BASIC_FLAGS = -W -Wall -Wextra -O2 -std=c++11 -g -pedantic

%.bin: %.cc
	clang++  $(BASIC_FLAGS)  -o $*.bin $*.cc
