#include <iostream>

int myNum2 = 2;//Global variable

void printNum();

int main()
{
    //Local variables = declared inside a function or block {}
    //Global variables = declared outside of all functions


    int myNum1 = 1;//Local variable

    printNum();
    std::cout << myNum1 << '\n';
    // std::cout << myNum2 << '\n';
    return 0;
}

void printNum(){
    // std::cout << myNum1;//can't detect myNum1 cause it is inside main function,
                           // it will require a matching set of parameters to the function.
    std::cout << myNum2;//can detect cause myNum2 is a Global function
}