# if multiple files have to be linked then you have to link each one name1.0 name2.0 ... nameN.o
# cannot have in line comments with the commands
# template: g++ <name1>.o <name2>.o ... <nameN>.o -o <executableName>
hello: hello.o 
	g++ hello.o -o hello 

# if multiple files you have to iterate for each one
# -c denotes to compile the given code <nameOfObjectfile>.o: <nameOfCompiledCode>.cpp
hello.o: hello.cpp
	g++ -c hello.cpp 

clean:
	rm *.o hello
