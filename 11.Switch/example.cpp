#include <iostream>

int main()
{
    char tier;
    std::cout << "Explaining tier list!" << '\n';
    std::cout << "Enter a tier :";
    std::cin >> tier;
    switch(tier){
        case 'S':
            std::cout << "This is the best";
            break;
        case 'A':
            std::cout << "This is also great but not as extraordinary as the S";
            break;
        case 'B':
            std::cout << "This is good";
            break;
        case 'C':
            std::cout << "This is not that good but fair enough";
            break;
        case 'D':
            std::cout << "This is definitely bad but not as bad as the F";
            break;
        case 'F':
            std::cout << "This is the worst";
            break;
        default :
            std::cout << "Enter a tier among (S,A,B,C,D,F)";
    }
    return 0;
}