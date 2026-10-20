#include <iostream>

enum Day {
    sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4,
    friday = 5, saturday = 6
};

enum Flavor {vanilla, chocolate, strawberry, mint};//Can also be declared with numbers, the number will be given accordingly.

int main()
{
    /*
    enums = a user-defined data type that consists of
            paired named-integer constants.
            GREAT if you have a set of potential options
    One of its usecase is in switch where we can't use strings .
    */
    
    Day today = friday;

    switch(today){
        case sunday : std::cout << "It's Sunday!\n";//Can use the associated numbers in the case but less readability
                            break;
        case monday : std::cout << "It's Monday!\n";
                            break;
        case tuesday : std::cout << "It's Tuesday!\n";
                            break;
        case wednesday : std::cout << "It's Wednesday!\n";
                            break;
        case thursday : std::cout << "It's Thursday!\n";
                            break;
        case friday : std::cout << "It's Friday!\n";
                            break;
        case saturday : std::cout << "It's Saturday!\n";
                            break;
    }
    return 0;
}