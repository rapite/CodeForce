test: main.cpp
	g++ -std=c++23 -O2 -Wall main.cpp -o test

setup: t.cpp
	cp t.cpp main.cpp
clean:
	rm test
