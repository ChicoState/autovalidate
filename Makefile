make:
	g++ -std=c++17 main.cpp

.PHONY: clean

clean:
	rm -f *.o*
