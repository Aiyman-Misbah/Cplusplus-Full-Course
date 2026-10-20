#include <iostream>

int main()
{

    std::string animes[5];
    int size = sizeof(animes) / sizeof(animes[0]);
    std::string temp;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter an anime you like or 'q' for quit #" << i + 1 << ":";
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            animes[i] = temp;
        }
    }

    std::cout << "You like the following animes :\n";

    for (int i = 0; !animes[i].empty(); i++)
    {
        std::cout << animes[i] << '\n';


    }
    return 0;
}