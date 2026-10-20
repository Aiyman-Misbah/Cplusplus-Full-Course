#include <iostream>
double square(double length);
double cube(double length);

int main()
{
    // return = return a value back to the spot 
    //          where you called the encompassing function

    double length = 6.0;
    std::cout << "The area is " << square(length) << " cm^2\n";
    std::cout << "The volume is " << cube(length) << " cm^3\n";

    return 0;
}

double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}