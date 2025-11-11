// Data Abstraction is one of the most essential and important feature of Object Oriented Programming in c++.
// Abstraction means displays only the relevant attributes of objects and hides the unnecessary details like the background details and implementation.

// Advantages:

// Helps user to avoid writing the low level code.
// Avoids code duplication and increases reusability.
// Helps to increase security of an application or program as only required details are provided to the user.

#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Shape
{
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Circle c1;
    c1.draw();

    return 0;
}