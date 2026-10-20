#include <iostream>

void showInfo(const std::string name, const int age);

int main()
{
    //const parameter = parameter that is effectively read-only.
    //                  Code is more secure & conveys intent,
    //                  useful for references and pointers.

    std::string name = "Misbah";
    int age = 21;

    showInfo(name , age);



    return 0;
}

void showInfo(const std::string name, const int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}