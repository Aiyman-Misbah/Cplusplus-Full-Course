#include <iostream>

struct Anime
{
    std::string name;
    int year;
    std::string genre;
};

void printAnime(Anime &anime);
void changeYear(Anime &anime, int Year);

int main()
{
    Anime anime1;
    Anime anime2;

    anime1.name = "One Piece";
    anime1.year = 1999;
    anime1.genre = "Shonen";
    
    anime2.name = "Monster";
    anime2.year = 2004;
    anime2.genre = "Seinen";

    // std::cout << &anime1 << '\n';//The address value of anime1 here and after using in the function aren't same
    // printAnime(anime1);

    changeYear(anime1, 2000);
    changeYear(anime2, 2005);

    printAnime(anime1);
    printAnime(anime2);
    return 0;
}

// void printAnime(Anime anime){//Passing by value
//     std::cout << &anime << '\n';
//     std::cout << anime.name << '\n';
//     std::cout << anime.genre << '\n';
//     std::cout << anime.year << '\n';
// }
void printAnime(Anime &anime){//Passing by referance
    std::cout << &anime << '\n';
    std::cout << anime.name << '\n';
    std::cout << anime.genre << '\n';
    std::cout << anime.year << '\n';
}

void changeYear(Anime &anime, int Year){
    anime.year = Year;
}