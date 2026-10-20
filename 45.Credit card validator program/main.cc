/*
LUHN ALGORITHM:
1.Double every second digit from right to left 
  If doubled number is 2 digits, split them add them.
2.Add all single digits from step 1
3.Add all odd numbered digits from right to left
4.Sum results from steps 2 & 3
5.If step 4 is divisible by 10, The number is valid

6011 0009 9013 9424
6 1  0 0  9 1  9 2 
12 2  0 0  18 2  18 4 (Doubled)
1+2 2  0 0  1+8 2  1+8 4 (Split)
3 2  0 0  9 2  9 4
29 (step 2)
 0 1  0 9  0 3  4 4 (The odd numbered digits from right to left)
21 (step 3)
29 + 21 = 50 (step 4)
50 % 10 == 0 ?(step 5)
*/
#include <iostream>

int splitAndAddForSingleDigit(const int number);
int sumOddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    std::cout << "Enter the card number : \n";
    std::cin >> cardNumber;

    int result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);
    if(result % 10 == 0){
        std::cout << "The card number is valid!";
    }
    else{
        std::cout << "The card number is not valid!";
    }
    
    return 0;
}

int splitAndAddForSingleDigit(const int number){

    int firstDigit = number % 10;
    int secondDigit = number / 10;
    int singleDigit = firstDigit + secondDigit;

    return singleDigit;
}
int sumOddDigit(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i-=2)
    {
        sum += (cardNumber[i] - '0' );
    }
    return sum;
}
int sumEvenDigit(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i-=2)
    {
        sum += splitAndAddForSingleDigit((cardNumber[i] - '0' ) * 2);
    }
    return sum;
        
}