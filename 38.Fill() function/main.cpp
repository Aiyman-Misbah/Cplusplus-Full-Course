#include <iostream>

int main()
{
    //fill() = Fills a range of elements with a specified value
    //         fill(begin, end, value)

    // std::string animes[10] = {"Bleach", "Bleach", "Bleach", "Bleach", "Bleach", "Bleach", "Bleach", "Bleach", "Bleach", "Bleach",};

    // for (std::string anime : animes)
    // {
    //     std::cout << anime << '\n';
    // }

    // const int SIZE = 100;
    // std::string animes[SIZE];

    // fill(animes, animes + SIZE, "Bleach");

    // for(std::string anime : animes){
    //     std::cout << anime << '\n';
    // }

    const int SIZE = 100;
    std::string animes[SIZE];

    fill(animes, animes + (SIZE/2), "Bleach");
    fill(animes + (SIZE/2), animes + SIZE, "one piece");

    for(std::string anime : animes){
        std::cout << anime << '\n';
    }
    
    return 0;
}