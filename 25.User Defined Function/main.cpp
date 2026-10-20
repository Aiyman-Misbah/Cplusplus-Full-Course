#include <iostream>
// function = a block of reusable code
void happyBirthday();//Function prototype or function desleration
                     //It helps to use the function in the main function
                     //even though we define it after the main function.

void happyBirthday(){               //Function defining
    std::cout << "Happy Birthday\n";
}

int main()
{
    happyBirthday();//Function call
    return 0;
}

