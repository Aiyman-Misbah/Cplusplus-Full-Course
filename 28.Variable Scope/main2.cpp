#include <iostream>
int myNum = 3;

void printNum();
int main()
{
    //If we have a local variable inside a function and a global variable outside,
    //the function will use the local variable first and then the global variable,
    //if we want the function to use the global variable we use the scope resolution 
    //operator (::)

    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';//will print 3 even though the local variable has 1 in it
    std::cout << myNum << '\n';//will print 1

    return 0;
}

void printNum(){
    // int myNum = 2;
    std::cout << ::myNum << '\n';//will print 3 even though the local variable has 2 in it
}