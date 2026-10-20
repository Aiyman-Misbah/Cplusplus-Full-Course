#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
         this->side = side;
         this->area = side * side * 6;
         this->volume = side * side * side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.1416 * (radius * radius);
        this->volume = (4/3.0) * 3.1416 * (radius * radius * radius);
    }
};

int main()
{
    Cube mycube(8);
    Sphere mysphere(5);

    std::cout << "Area:" << mysphere.area << "cm^2\n";
    std::cout << "Area:" << mysphere.volume << "cm^3\n";
    return 0;
}