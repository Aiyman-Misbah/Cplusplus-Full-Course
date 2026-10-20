#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};
class Cat : public Animal{
    public:
        void meaow(){
            std::cout << "The cat is meaowing!\n";
        }
};
class Dog : public Animal{
    public:
        void bark(){
            std::cout << "The dog is barking!\n";
        }
};


int main()
{
    //Inheritance = A class can receive attributes and methods from another class.
    //              Children classes inherit from a Parent class.
    //              Helps to reuse similar code found within multiple classes.

    Cat cat;
    Dog dog;

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meaow();
    
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    return 0;
}