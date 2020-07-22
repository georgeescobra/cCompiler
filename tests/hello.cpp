#include <iostream>
#include <cmath>
// makes it so you dont have to explicitly use namespace std::
// using namespace std;

int main(){
    std::cout << "Hello World\n"; // this is faster, but does not flush the buffer
    // The difference is that the one below flushes the buffer
    std::cout << "Another Hello World" << std::endl;
    // if the buffer isn't flushed, the buffer can fill and overflow
    double s2 = sqrt(2); // even if the input is int, casts to a double
    int some = 2;
    s2 = sqrt(some);
    std::cout << s2 << std::endl;
    // int init={6.23}; throws an error

    bool c1 = false;
    int c2 = 0;
    if (c1 == c2) std::cout << "false and 0 is equivalent" << std::endl;

    return 0;
}