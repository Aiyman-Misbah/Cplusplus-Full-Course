#include <iostream>

int main()
{
    int mark = 40;
    int total = 50;
    double score = mark/(double) total * 100;

    std::cout << score << "%" << '\n';
    return 0;
}