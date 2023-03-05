all=teat

test: Trapzint.h sul.cpp Trapzint.cpp
	g++ -o test sul.cpp Trapzint.cpp Trapzint.h
clean:
	rm test