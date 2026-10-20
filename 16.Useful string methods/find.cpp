#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);

    std::cout << name.find(" ");//Finds a certain characte,here it finds the index of the first white space 

    
    return 0;
}

//More on https://cplusplus.com/reference/string/string/