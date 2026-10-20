#include <iostream>

int factorial(int number);

int main()
{
    int num;
    std::cout << "Enter the Number : ";
    std::cin >> num;

    int ans = factorial(num);

    for(int i = num; i > 0; i--){
        if(i == 1){
            std::cout << i ;
            break;
        }
        std::cout << i << " X ";
    }
    std::cout << " = " << ans;
    return 0;
}

int factorial(int number){
    if(number == 1){                            //base case = when to stop.
        return 1;
    }
    return number * factorial(number - 1);

    //Alternative:

    // if(number > 1){                          //base case = when to stop.
    //     return number * factorial(number - 1);
    // }
    // else{
    //     return 1;
    // }
}