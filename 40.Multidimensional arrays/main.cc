#include <iostream>

int main()
{
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);//Full matrix or array is divided by a single row to determine how many rows are there.
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);//A single row is divided by a single element to determine how many columns are there.

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
        
    }
    
    return 0;
}