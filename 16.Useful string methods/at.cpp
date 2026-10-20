#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);

    char ch = name.at(4);
    // std::cout << name.at(5);//returns a character at a given position within a string
    std::cout << ch;

    
    return 0;
}

//More on https://cplusplus.com/reference/string/string/