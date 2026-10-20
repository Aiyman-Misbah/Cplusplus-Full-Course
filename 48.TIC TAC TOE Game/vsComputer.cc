#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

void drawBoard(char spaces[]);
void playerMove(char spaces[], char player);
void computerMove(char spaces[], char computer);
int findWinner(char spaces[], char player);
int checkTie(char spaces[]);

int main()
{
    srand(time(0));
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
    char player;
    char computer;
    int winner;
    int tie;
    char mark;

    std::cout << "******************\n";
    std::cout << "TICK TAC TOE Game!\n";
    std::cout << "Player vs Computer!\n";
    std::cout << "******************\n";

    std::cout << "Enter the mark you want to use ( X or O ) : ";
    std::cin >> mark;
    mark = (char)toupper(mark);
    if(mark == 'X'){
        player = mark;
        computer = 'O';
    }
    else{
        player = mark;
        computer = 'X'; 
    }
    
    drawBoard(spaces);

    do
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        winner = findWinner(spaces, player);
        if(winner == 1){
            break;
        }

        tie = checkTie(spaces);
        if(tie == 1){
            std::cout << "It's a tie!\n";
            break;
        }
        
        computerMove(spaces, computer);
        drawBoard(spaces);

        winner = findWinner(spaces, player);
        if(winner == 1){
            break;
        }

        tie = checkTie(spaces);
        if(tie == 1){
            std::cout << "It's a tie!\n";
            break;
        }  
    } while (1);
    
    return 0;
}

void drawBoard(char spaces[]){
    std::cout << '\n';
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[0]<<"  |  "<< spaces[1]<<"  |  "<< spaces[2]<<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[3]<<"  |  "<< spaces[4]<<"  |  "<< spaces[5]<<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[6]<<"  |  "<< spaces[7]<<"  |  "<< spaces[8]<<"  \n";
    std::cout << "     |     |     \n";
    std::cout << '\n';
}
void playerMove(char spaces[], char player){
    int position;
    
    do{
        std::cout << "Enter the position you want to mark : ";
        std::cin >> position;
    }while (position < 1 || position > 9 || spaces[position - 1] != ' ');

    spaces[position - 1] = player; 
}
void computerMove(char spaces[], char computer){
    int position;
    
    while(true){
        position = rand() % 9;
        if(spaces[position] == ' '){
            spaces[position] = computer;
            break;
        }
    }
}
int findWinner(char spaces[], char player){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return 1;
    }
    else{
        return 0;
    }
}
int checkTie(char spaces[]){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return 0;
        }
    }
    return 1;
}