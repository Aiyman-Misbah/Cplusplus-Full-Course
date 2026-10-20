#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    std::cout << "*********** Number Guessing Game ***********\n";
    do
    {
        std::cout << "Guess a number berween (1-100):\n";
        std::cin >> guess;
        tries++;
        if(guess < num){
            std::cout << "Enter a higher number!\n";
            
        }
        else if(guess > num){
            std::cout << "Enter a lower number!\n";
        }
        else{
            std::cout << "You guessed it correct in " << tries << " tries!" << '\n';
        }
    } while (guess != num);

    std::cout << "********************************************";
    
    return 0;
}