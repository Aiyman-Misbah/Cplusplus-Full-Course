#include <iostream>

int main()
{
    //integer (whole number)
    int age = 20;
    int year = 2023;
    int days = 7.5;

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';

    //double (number including decimal)
    double price =  10.99;
    double gpa = 3.97;
    double temparature = 25.1;

    std::cout << temparature << '\n';
    std::cout << gpa << '\n';
    std::cout << price << '\n';

    //char single character 
    char grade = 'A';
    char initial = 'c';
    //char currency = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';

    //boolean(true or false)
    // bool student = false;
    // bool forSale = true;

    //string(objects that represents a sequence of text)
    std::string name = "Misbah";
    std::string day = "Friday";
    std::string food = "Biriyani";
    
    std::cout << "Hello I am " << name << '\n';
    std::cout << "I am " << age << " years old!" << '\n';


    
    return 0;
}