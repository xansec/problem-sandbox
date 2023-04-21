CXX=clang++
LLVMFLAGS=
FUZZ=./FuzzMe

build:
	$(CXX) -fsanitize=fuzzer FuzzMe.cpp -o FuzzMe
clean:
	-rm -rf FuzzMe *.o 
