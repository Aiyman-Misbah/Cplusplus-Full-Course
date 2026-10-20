#include <iostream>

int main()
{
    //foreach loop = loop that eases the traversal over an
    //               iterable data set

    std::string animes[] = {"One piece", "Naruto", "Bleach"};
    int marks[] = {99,80,89,67,90};

    for(std::string anime : animes){
        std::cout << anime << '\n'; 
    }

    for(int mark : marks){
        std::cout << mark << '\n';
    }
    
    return 0;
}