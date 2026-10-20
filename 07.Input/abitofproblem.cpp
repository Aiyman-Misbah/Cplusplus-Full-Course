#include <iostream>


int main()
{
    std::string name;
    int id;
    
    //If we accept some input with cin followed by
    //getline there's a newline char (\n) input buffer.
    //The getline function accepts the newline char.

    std::cout << "What's your ID?" << '\n';
    std::cin >> id;

    std::cout << "What's your full name?" << '\n';
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << "(" << id << ")" << '\n';
    std::cout << "Welcome to the journey";
    return 0;
}