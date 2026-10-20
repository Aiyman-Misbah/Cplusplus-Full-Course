#include <iostream>
// struct indentifier{
//      members
// }

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    // struct = A structure that groups related variables under one name.
    //          Structs can contain many different data types (string, int, double, bool, etc.)
    //          Variables in a struct are known as "members"
    //          Members can be access with "." (Class Member Access Operator)

    student student1;
    student1.name = "Luffy";
    student1.gpa = 3.2;

    student student2;
    student2.name = "Zoro";
    student2.gpa = 3.5;

    student student3;
    student3.name = "Sanji";
    student3.gpa = 3.0;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';
    return 0;
}