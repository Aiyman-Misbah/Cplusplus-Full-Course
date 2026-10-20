#include <iostream>
#include <iomanip>
#include <limits>//For line 30

void showBalance(double balance);
double deposite(double balance);
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice;

    while (1)
    {
        std::cout << "**********************\n";
        std::cout << "Enter your choice : \n";
        std::cout << "**********************\n";
        std::cout << "1.Show Balance.\n";
        std::cout << "2.Deposite Money.\n";
        std::cout << "3.Withdraw Money.\n";
        std::cout << "4.Exit.\n";
        std::cin >> choice;

        // std::cin.clear();
        // fflush(stdin);

        // Better alt for line 24 and 25:
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = deposite(balance);
            showBalance(balance);
            break;
        case 3:
            balance = withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!";
            break;

        default:
            std::cout << "Invalid choice!\n";
        }
        if (choice == 4)
        {
            break;
        }
    }

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is " << std::setprecision(2) << std::fixed << balance << "BDT\n";
}

double deposite(double balance)
{
    double amount;
    std::cout << "Enter the amount you want to deposite :";
    std::cin >> amount;

    if (amount < 0)
    {
        std::cout << "Invalid amount!\n";
    }
    else
    {
        balance += amount;
    }
    return balance;
}

double withdraw(double balance)
{
    double amount;
    std::cout << "Enter the amount you want to withdraw :";
    std::cin >> amount;
    if (amount < 0)
    {
        std::cout << "Invalid amount!\n";
        return 0;
    }
    else
    {
        if (balance < amount)
        {
            std::cout << "Insufficient balance!\n";
            return 0;
        }
        else
        {
            balance -= amount;
            return balance;
        }
    }
}

// #include <iostream>
// #include <iomanip>
// #include <limits>

// void showBalance(double balance);
// double deposite();
// double withdraw(double balance);

// int main()
// {
//     double balance = 0;
//     int choice;

//     do
//     {
//         std::cout << "**********************\n";
//         std::cout << "Enter your choice : \n";
//         std::cout << "**********************\n";
//         std::cout << "1.Show Balance.\n";
//         std::cout << "2.Deposite Money.\n";
//         std::cout << "3.Withdraw Money.\n";
//         std::cout << "4.Exit.\n";
//         std::cin >> choice;
//         std::cin.clear();
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

//         switch (choice)
//         {
//         case 1:
//             showBalance(balance);
//             break;
//         case 2:
//             balance += deposite();
//             showBalance(balance);
//             break;
//         case 3:
//             balance -= withdraw(balance);
//             showBalance(balance);
//             break;
//         case 4:
//             std::cout << "Thanks for visiting!";
//             break;

//         default:
//             std::cout << "Invalid choice!\n";
//         }
//     } while (choice != 4);

//     return 0;
// }

// void showBalance(double balance)
// {
//     std::cout << "Your balance is " << std::setprecision(2) << std::fixed << balance << "BDT\n";
// }

// double deposite()
// {
//     double amount;
//     std::cout << "Enter the amount you want to deposite :";
//     std::cin >> amount;

//     if(amount < 0){
//         std::cout << "Invalid amount!\n";
//         return 0;
//     }
//     else{
//         return amount;
//     }

// }

// double withdraw(double balance)
// {
//     double amount;
//     std::cout << "Enter the amount you want to withdraw :";
//     std::cin >> amount;
//     if(amount < 0){
//         std::cout << "Invalid amount!\n";
//         return 0;
//     }
//     else if(balance < amount){
//         std::cout << "Insufficient balance!\n";
//         return 0;
//     }
//     else{
//         return amount;
//     }
// }