all: obj

obj: test-split-1 test-split-2
test: do-test-split-1 do-test-split-2
comp: compare-test-split
clean:
	rm -f *.o *~ split-output*

split.o: split.cpp
	$(CXX) -Wall -O3 -c split.cpp -o split.o

test-split-1: test-split-1.cpp split.o
	$(CXX) -Wall -O3 test-split-1.cpp split.o -o test-split-1

do-test-split-1: test-split-1 test-input.txt
	cat test-input.txt | ./test-split-1

test-split-2: test-split-2.cpp split.o
	$(CXX) -Wall -O3 test-split-2.cpp split.o -o test-split-2

do-test-split-2: test-split-2 test-input.txt
	cat test-input.txt | ./test-split-2

compare-test-split: test-split-1 test-split-2
	cat test-input.txt | ./test-split-1 > split-output.1
	cat test-input.txt | ./test-split-2 > split-output.2
	diff split-output.1 split-output.2


.PHONY=clean