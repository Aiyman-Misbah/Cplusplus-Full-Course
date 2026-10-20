#include <iostream>

int main()
{
    //pointers = variable that stores a memory address of another variable,
    //           sometimes it's easier to work with an address

    // & is address-of operator
    // * is dereference operator
    std::string name = "Misbah";
    int age = 21;
    std::string animes[5] = {"One piece", "Naruto", "Bleach"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pAnimes = animes;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pAnimes << '\n';
    return 0;
}