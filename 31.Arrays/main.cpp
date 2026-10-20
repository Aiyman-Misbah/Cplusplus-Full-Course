#include <iostream>

int main()
{
    //array = a data structure that can hold multiple values of same data type,
    //        values are accessed by an index number
    //        "kind of like a variable that holds multiple values"

    std::string animes[] = {"one_piece", "Naruto", "Bleach"};

    std::cout << animes[0] << '\n';
    std::cout << animes[1] << '\n';
    std::cout << animes[2] << '\n';
    return 0;
}