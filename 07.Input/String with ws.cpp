#include <iostream>


int main()
{
    std::string name;

    std::cout << "What's your full name?" << '\n';
    std::getline(std::cin , name);

    std::cout << "Hello " << name << '\n';
    std::cout << "Welcome to the journey";
    return 0;
}