#include <iostream>

int main(){

    //Compile time error
    // std::cout << "Hello World!" << std::endl
    std::cout << "Hello World!" << std::endl;
    
    //Runtime error
    // int value = 7/0; 
    int value = 20/5;
    std::cout << "value : " <<value << std::endl;

    return 0;  
}