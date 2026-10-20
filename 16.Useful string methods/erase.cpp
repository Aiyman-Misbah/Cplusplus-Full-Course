#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);

    name.erase(0, 3);//erase a certain portion of the string, erase(starting index,ending index)

    std::cout << name;

    
    return 0;
}

//More on https://cplusplus.com/reference/string/string/