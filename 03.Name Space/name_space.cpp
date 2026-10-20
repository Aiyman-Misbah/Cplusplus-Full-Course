#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main()
{
    /*
    Namespace = provides a solution for preventing name
    conflicts in large projects. Each entity needs a unique
    name. A namespace allows for identically named entities 
    as long as the namespaces are different.
    */

    // int x = 0;

    // std::cout << x << '\n';
    // std::cout << first::x << '\n';  // :: --> scope resolution operator.
    // std::cout << second::x << '\n';


    // using namespace first;


    // std::cout << x;//Without prefix

    // using namespace std;
    
    //safer alternative:
    
    using std::string;
    using std::cout;

    string name = "Misbah";

    cout << name << " bro" << '\n';
    
    return 0;
}