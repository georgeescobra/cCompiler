# GOALS
- Create a C Compiler with C++
- LEARN C++
- Have a better understanding of compilers/interpreters

# NOTES ABOUT COMPILERS
- 

# NOTES ABOUT C++ (REFRESHER)
- For a program to run it its source text has to be processed by a compiler
    - this produces object files per source file
    - then finally produces a linker to an executable file
        - these executables are not portable from Mac to Windows (whatever os)
        - However the source files are portable 
    
- Function Overloading
    - When multiple functions are labeled the same name but takes different parameters
    - print(double), print(string), print(int)
    - compiler takes care of picking the right one, but make sure that the functions aren't ambigious
    - print(double, int) print(int, double): this will throw a compiler error
    - make sure that all these functions are semantically the same;w

- Initialization of Variables
    - Can either use '=' operator or '{}' 
    - '=' will implicilty conver the given: int i = 7.3 // converts to 7
    - '{}' will actually throw an error for: int {7.3}
    - can also use int x = {3} // the {} is then optional but the non conversion from '{}' applies
    - can use 'auto' when declaring a type, if the the value being initialized is obvious
        - auto b = true, auto b = 'x', auto b = '7.32'
    
    - const to make sure that there are no accidental changes by the method
        - When we don’t want to modify an argument but still don’t want the cost of copying, we use a const reference
    - constexpr specifies that the object should be available
    - static defines the object's lifetime during execution

    - NULL and nullptr are different
    - NULL is 0 literal
        - int f(int x); int f(int * p);
        - f(NULL) // will invoke f(int x)
    - for (; *p!=0; ++p) // you can ommit the initializer part of the for loop
        - in C-style strings the string is 0 terminated
        - false == 0

    - if-statement can introduce a variable and test it.
        - A name declared in a condition is in scope on both branches of the if-statement.

    - pass by reference

    - pass by value