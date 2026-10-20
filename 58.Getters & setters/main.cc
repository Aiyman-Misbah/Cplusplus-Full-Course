#include <iostream>

class Stove
{
private: // access specifier
    int temperature = 0;

public:
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if (temperature <= 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // Setter = function that makes a private attribute WRITEABLE
    Stove rflstove;
    // rflstove.temperature = 1000000;//we can't change the attributes that are in private

    rflstove.setTemperature(-5);

    std::cout << "The temperature setting is : " << rflstove.getTemperature();
    return 0;
}