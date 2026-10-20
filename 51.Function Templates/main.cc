#include <iostream>

template <typename DT1, typename DT2>

auto max(DT1 x, DT2 y){
    return (x > y) ? x : y;
}

int main()
{
    /*
    Function template = describes what a function looks like.
                        Can be used to generate as many overloaded functions
                        as needed, each using different data types
    */
    // template <typename DT>

    // DT max(DT x, DT y)
    // {
    //     return (x > y) ? x : y;
    // }
    // std::cout << max('B', 'C') << '\n'; // Can use different datatypes but not at the same time.

    // To use different datatypes at the same time in the function:

    std::cout << max(21.67,'b');

    return 0;
}