#include <iostream>

int main()
{
    //if statements = do something if a condition is true.
    //                if not , then don't do it.

    int mark;
    std::cout << "Enter your mark : ";
    std::cin >> mark;

    if(mark >= 80){
        std::cout << "You got A+";
    }
    else if(mark >= 70){
        std::cout << "You got A";
    }
    else if(mark >= 60){
        std::cout << "You got A-";
    }
    else if(mark >= 50){
        std::cout << "You got B";
    }
    else if(mark >= 40){
        std::cout << "You got B-";
    }
    else if(mark >= 33){
        std::cout << "You got C";
    }
    else
        std::cout << "You have failed!";
    return 0;
}