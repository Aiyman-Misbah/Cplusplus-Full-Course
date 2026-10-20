#include <iostream>

//cout <<(insertion operator)
//cin >>(extraction operator)

int main()
{
    std::string name;
    int id;

    std::cout << "What's your name?" << '\n';
    std::cin >> name;

    std::cout << "What's your ID?" << '\n';
    std::cin >> id;

    std::cout << "Hello " << name << "(" << id << ")" << '\n';
    std::cout << "Welcome to the journey";
    return 0;
}