#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;
    do
    {
        std::cout << "***************************\n";
        std::cout << " Rock-Paper-Scissors Game!\n";
        std::cout << "***************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";

        player = getUserChoice();
        if (player != 'r' && player != 'p' && player != 's')
        {
            std::cout << "Invalid Input!\n";
            continue;
        }
        std::cout << "Your choice is ";
        showChoice(player);
        computer = getComputerChoice();
        std::cout << "Computer's choice is ";
        showChoice(computer);

        chooseWinner(player , computer);
        
    } while (player != 'r' && player != 'p' && player != 's');
    return 0;
}

char getUserChoice(){
    char player;
    std::cin >> player;
    
    return player;
}
char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default : return 0;
    }
}
void showChoice(char choice)
{
    if(choice == 'r'){
        std::cout << " Rock!\n";
    }
    else if(choice == 'p'){
        std::cout << " Paper!\n";
    }
    else{
        std::cout << " Scissors!\n";
    }
}
void chooseWinner(char player, char computer)
{
    if(player == 'r' && computer == 'p'){
        std::cout << "Computer wins!\n";
    }
    else if(player == 'r' && computer == 's'){
        std::cout << "You win!\n";
    }
    else if(player == 'p' && computer == 's'){
        std::cout << "Computer wins!\n";
    }
    else if(player == 'p' && computer == 'r'){
        std::cout << "You win!\n";
    }
    else if(player == 's' && computer == 'r'){
        std::cout << "Computer wins!\n";
    }
    else if(player == 's' && computer == 'p'){
        std::cout << "You win!\n";
    }
    else{
        std::cout << "It's a tie!\n";
    }
}