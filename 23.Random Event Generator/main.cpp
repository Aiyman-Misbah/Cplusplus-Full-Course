#include <iostream>
#include <ctime>

int main()
{
    srand(time(0)); // use the current time as a seed to generate random numbers
    int randNum = rand() % 5 + 1;
    switch (randNum)
    {
    case 1:
        std::cout << "Loki appears!";
        break;
    case 2:
        std::cout << "Zoro appears!";
        break;
    case 3:
        std::cout << "Luffy appears!";
        break;
    case 4:
        std::cout << "Sanji appears!";
        break;
    case 5:
        std::cout << "Shanks appears!";
        break;
    }

    return 0;
}