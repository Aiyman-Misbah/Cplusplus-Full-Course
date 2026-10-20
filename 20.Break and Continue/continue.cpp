#include <iostream>

int main()
{
    //continue = skip current iteration
    for (int i = 1; i <= 20; i++)
    {
        if(i == 11){
            continue;
        }
        std::cout << i << '\n';
    }
    
    return 0;
}