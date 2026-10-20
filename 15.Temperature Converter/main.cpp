#include <iostream>

int main()
{
    double temp;
    char unit1;
    char unit2;

    std::cout << "****** Temperature Conversion ******\n";
    std::cout << "C = Celsius\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "Which unit would you like to convert to? :";
    std::cin >> unit1;
    std::cout << "Enter the temperature :";
    std::cin >> temp;
    if(unit1 == 'C' || unit1 == 'c'){
        std::cout << "Enter the unit of your temperature :";
        std::cin >> unit2;
        if(unit2 == 'F' || unit2 == 'f'){
            temp = (temp - 32) * 5 / 9;
        }
        else if(unit2 != 'C' && unit2 != 'c'){
            std::cout << "Invalid source unit.\n";
            return 1;
        }

        std::cout << "The temperature in Celsius is " << temp << "C" << '\n';
    }
    else if(unit1 == 'F' || unit1 == 'f'){
        std::cout << "Enter the unit of your temperature :";
        std::cin >> unit2;
        if(unit2 == 'C' || unit2 == 'c'){
            temp = temp * 9 / 5 + 32;
        }
        else if(unit2 != 'F' && unit2 != 'f'){
            std::cout << "Invalid source unit.\n";
            return 1;
        }

        std::cout << "The temperature in Fahrenheit is " << temp << "F" << '\n';
    }
    else{
        std::cout << "Invalid target unit.Enter only C/F\n";
        return 1;
    }


    std::cout << "************************************\n";

    return 0;
}