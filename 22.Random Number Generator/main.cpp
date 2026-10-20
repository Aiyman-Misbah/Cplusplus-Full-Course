#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num = (rand() % 6) + 1;//will generate number between 1-6

    std::cout << num;
    return 0;
}