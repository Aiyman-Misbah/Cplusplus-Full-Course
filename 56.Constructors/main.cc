#include <iostream>

class Student{
    public://access modifier
        std::string name;
        int age;
        double gpa;
    
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    //If the attributes are not same as the constructor's parameters:

    // Student(std::string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }
};

int main()
{
    /*
    constructor = special method that is automatically called when object is instantiated,
                  useful for assigning values to attributes as arguments
    */

    Student student1("Luffy", 19, 3.1);
    Student student2("Zoro", 22, 3.5);

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    return 0;
}