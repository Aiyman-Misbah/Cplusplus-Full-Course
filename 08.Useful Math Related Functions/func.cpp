#include <iostream>
#include <cmath>

int main()
{
    double x = 3.49;
    double y = 5.99;
    double z;

    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(x,y);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    z = ceil(x);//rounds up the value
    z = floor(y);//rounds down the value

    std::cout << z;
    return 0;
}

//More reference :
//https://cplusplus.com/reference/cmath/