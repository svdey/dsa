CXX = clang++
CXXFLAGS = -std=c++17 -g -Wno-everything

# Build the main test runner object file (compiled once to save time)
test_runner.o: test_runner.cpp
	$(CXX) $(CXXFLAGS) -c test_runner.cpp -o test_runner.o

# Run tests for a specific problem file
test: test_runner.o
ifndef FILE
	$(error FILE is not set. Usage: make test FILE=topic/problem.cpp)
endif
	$(CXX) $(CXXFLAGS) $(FILE) test_runner.o -o run_tests
	./run_tests

clean:
	rm -f *.o run_tests main main-debug
	find . -name "*.d" -type f -delete
	find . -name "*.o" -type f -delete