#include <iostream>

int main()
{
    int rows;
    int colums;
    char symbol;

    std::cout << "            Create your own rectangle        \n";

    std::cout << "How many rows? :";
    std::cin >> rows;
    
    std::cout << "How many colums? :";
    std::cin >> colums;

    std::cout << "Enter a symbol:";
    std::cin >> symbol;

    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <=colums; j++)
        {
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
        
    }
    
    
    return 0;
}