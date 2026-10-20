#include <iostream>

int main()
{
    //break = break out of a loop
    for (int i = 1; i <= 20; i++)
    {
        if(i == 11){
            break;
        }
        std::cout << i << '\n';
    }
    
    return 0;
}