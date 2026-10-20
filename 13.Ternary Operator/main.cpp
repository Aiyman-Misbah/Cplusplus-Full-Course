#include <iostream>

int main()
{
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;

    // int grade = 75;
    // grade >= 33 ? std::cout << "You pass!" : std::cout << "You fail!";

    int number;
    std::cout << "Enter a number :\n";
    std::cin >> number;

    // number % 2 == 0 ? std::cout << "The number " << number << " is even\n" : std::cout << "The number " << number << " is odd\n";
    //alt:
    // number % 2 == 1 ? std::cout << "The number " << number << " is odd\n" : std::cout << "The number " << number << " is even\n";
    //alt:
    // number % 2 ? std::cout << "The number " << number << " is odd\n" : std::cout << "The number " << number << " is even\n";
    //alt:
    std::cout << (number % 2 ? "Odd" : "Even");

    // bool hungry = true;

    // // hungry ? std::cout << "Eat" : std::cout << "Don't eat";
    // //alt: 
    // std::cout << (hungry ? "Eat" : "Don't eat");

    return 0;
}