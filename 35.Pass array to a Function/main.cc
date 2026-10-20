#include <iostream>

double getTotal(double prices[], unsigned int size);

int main()
{
    double prices[] = {49.99, 14.67, 66.67, 100, 9.1};
    unsigned int size = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices, size);

    std::cout << total << " BDT";
    return 0;
}

double getTotal(double prices[], unsigned int size)
{
    double total = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

//When an array is passed to a function it decays to a pointer which is the
//address of the first element of the array,so the function doesn't know how
//long the array is