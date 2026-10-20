#include <iostream>

int main()
{
    //sizeof() = determines the size in bytes of a 
    //           (variable, data type, class, objects, etc)

    double gpa = 3.45;
    std::string name = "Aiyman Misbah";
    char grade = 'A';
    bool students = true;
    char grades[] = {'A', 'B', 'C'};
    std::string animes[] = {"One piece", "Naruto", "Bleach"};

    std::cout << sizeof(gpa) << " bytes\n";//sizeof(double)
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(students) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(animes) << " bytes\n";
    
    //How to find how many elements are there in an array?:

    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(animes)/sizeof(std::string) << " elements\n";
    return 0;
}