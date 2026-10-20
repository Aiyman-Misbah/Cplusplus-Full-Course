#include <iostream>

int main()
{
    /*
    Type conversion = a value of one data type to another.
                        Implicit = automatic
                        Explicit = precode value with new data type (int) 
    */

    int x = 3.14;//Implicit type conversion

    double y = (int) 5.99;//Explicit type conversion

    char z = 100;//Implicit type conversion


    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << (char) 100 << '\n';//Explicit type conversion
    return 0;
}