#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);

    if(name.empty()){
        std::cout << "You didn't enter your name!";
    }
    else
        std::cout << "Welcome " << name;

    
    return 0;
}

//More on https://cplusplus.com/reference/string/string/