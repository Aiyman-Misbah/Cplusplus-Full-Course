#include <iostream>
//
void happyBirthday(std::string a, int age);


int main()
{
    std::string name = "Misbah";
    int age = 20;
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string a, int age){
    std::cout << "Happy Birthday " << a << '\n';
    std::cout << "You are " << age << " years old\n";
}