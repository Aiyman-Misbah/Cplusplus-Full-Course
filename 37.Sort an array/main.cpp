#include <iostream>

int main()
{
    int array[] = {8, 7, 1, 3, 2, 4, 10, 5, 9, 6};
    int size = sizeof(array)/sizeof(array[0]);

    int temp;
    for(int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        
        
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
    

    return 0;
}