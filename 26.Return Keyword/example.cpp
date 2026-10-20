#include <iostream>

std::string fullN(std::string firstN, std::string lastN);

int main()
{
    std::string firstName;
    std::string lastName;

    std::cout << "Enter your first name :\n";
    std::cin >> firstName;

    std::cout << "Enter your last name :\n";
    std::cin >> lastName;

    // std::string fullname = fullN(firstName, lastName);
    // std::cout << fullname;

    std::cout << "Hello " << fullN(firstName, lastName) << '\n';

    return 0;
}

std::string fullN(std::string firstN, std::string lastN){
    return firstN + ' ' + lastN;
}
