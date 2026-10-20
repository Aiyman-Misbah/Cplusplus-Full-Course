#include <iostream>

void swap(std::string &a, std::string &b);

int main()
{
    std::string x = "Coffee";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X is : " << x << '\n';
    std::cout << "Y is : " << y << '\n';
    return 0;
}

void swap(std::string &a, std::string &b){//void swap(std::string a, std::string b) is pass by value that will 
                                         //receive the copy of the values of a and b, so the swap function will
                                         //only swap the copied value while the values on those addresses are still
                                         //same , so we use the & operator to pass by reference that will ensure that 
                                         //the addresses are passed on that function and then the swap function will work
    std::string temp;
    temp = a;
    a = b;
    b = temp;
}