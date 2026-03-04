Compile:g++ -Iinclude -c src/main.cpp -o main.o

Build:g++ main.o -o assignment3.exe          

Run:./assignment3


test
compile: g++ -Iinclude -c src/test.cpp -o test.o
build: g++ test.o -o test.exe 
run: ./test