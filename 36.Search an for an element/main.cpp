//This is linear search!

#include <iostream>

int searchNum(int array[], int size, int element);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter the number you want to search : " << '\n';
    std::cin >> myNum;

    index = searchNum(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << "Your searched Number is in index " << index << '\n';
    }
    else
        std::cout << "Your Number wasn't found in the array!\n";
    
    
    return 0;
}

int searchNum(int array[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}