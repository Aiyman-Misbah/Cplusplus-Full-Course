#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);

    name.clear();

    std::cout << "Hello " << name;

    
    return 0;
}

//More on https://cplusplus.com/reference/string/string/