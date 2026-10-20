#include <iostream>
#include <string>

int main()
{
    // std::string animes[] = {"One Piece", "Naruto", "Bleach", "HxH"};

    // for (int i = 0; i < sizeof(animes)/sizeof(std::string); i++)
    // {
    //     std::cout << animes[i] << '\n';
    // }
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (unsigned int i = 0; i < sizeof(grades)/sizeof(char); i++)
    {
        std::cout << grades[i] << '\n';
    }
    
    
    return 0;
}