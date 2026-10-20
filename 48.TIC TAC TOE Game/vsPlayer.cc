#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

void drawBoard(char spaces[]);
void player1Move(char spaces[], char player1);
void player2Move(char spaces[], char player2);
int findWinner(char spaces[], char player1);
int checkTie(char spaces[]);

int main()
{
    srand(time(0));
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
    char player1;
    char player2;
    int winner;
    int tie;

    std::cout << "******************\n";
    std::cout << "TICK TAC TOE Game!\n";
    std::cout << "Player vs Player\n";
    std::cout << "******************\n";

    std::cout << "Player 1 :\n";
    std::cout << "Enter the mark you want to use ( X or O ) : ";
    std::cin >> player1;
    player1 = toupper(player1);

    if(player1 == 'X'){
        player2 = 'O';
    }
    else{
        player2 = 'X';
    }
    
    drawBoard(spaces);

    do
    {
        std::cout << "Move for Player 1 :\n";
        player1Move(spaces, player1);
        drawBoard(spaces);
        
        winner = findWinner(spaces, player1);
        if(winner == 1){
            break;
        }
        
        tie = checkTie(spaces);
        if(tie == 1){
            std::cout << "It's a tie!\n";
            break;
        }
        
        std::cout << "Move for Player 2 :\n";
        player2Move(spaces, player2);
        drawBoard(spaces);

        winner = findWinner(spaces, player1);
        if(winner == 1){
            break;
        }

        tie = checkTie(spaces);
        if(tie == 1){
            std::cout << "It's a tie!\n";
            break;
        }  
    } while (1);

    std::cout << "Thanks for playing!!\n";
    
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
void player1Move(char spaces[], char player1){
    int position;
    
    do{
        std::cout << "Enter the position you want to mark ( 1 - 9 ) : ";
        std::cin >> position;
    }while (position < 1 || position > 9 || spaces[position - 1] != ' ');

    spaces[position - 1] = player1; 
}
void player2Move(char spaces[], char player2){
    int position;

    do{
        std::cout << "Enter the position you want to mark ( 1 - 9 ) : ";
        std::cin >> position;
    }while (position < 1 || position > 9 || spaces[position - 1] != ' ');

    spaces[position - 1] = player2;
    
}
int findWinner(char spaces[], char player1){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
        return 1;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
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