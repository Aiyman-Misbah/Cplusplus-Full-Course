#include <iostream>

class Human{
    public:
        std::string name;//Can also assign the attributes by default 
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main()
{
    /*
    Object = A collection of attributes and methods.
             They can have characteristics and could perform actions.
             Can be used to mimic real world items (ex. Phone, Book, Dog)
             Created from a class which acts as a "Blue-print"
    */

    Human human1;
    Human human2;

    human1.name = "Luffy";
    human1.occupation = "Pirate";
    human1.age = 19;
    
    human2.name = "Zoro";
    human2.occupation = "Pirate Hunter";
    human2.age = 21;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();
    return 0;
}