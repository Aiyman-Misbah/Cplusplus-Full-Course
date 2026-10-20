#include <iostream>

void bakePizza(std::string topping1, std::string topping2);

int main()
{
    std::string topping1;
    std::string topping2;
    std::cin >> topping1;
    std::cin >> topping2;
    bakePizza(topping1, topping2);
    return 0;
}

void bakePizza(){
    std::cout << "Here is your Pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " <<topping1 <<" Pizza\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " <<topping1 << " and " << topping2 <<" Pizza\n";
}