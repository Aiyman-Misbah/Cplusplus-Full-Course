#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);

    name.insert(0,"Aiyman ");//inserts a character or a string at a given position within the string
    std::cout << name;
    
    return 0;
}

//More on https://cplusplus.com/reference/string/string/