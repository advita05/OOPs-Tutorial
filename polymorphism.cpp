// The word polymorphism means having many forms. Polymorphism occurs when there is a hierarchical mode inheritance.
// C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.

// There are 2 types of Polymorphism:

// 1. Compile time Polymorphism
// 2. Run time Polymorphism

#include <iostream>
#include <string>
using namespace std;

// CONSTRUCTOR OVERLOADING (COMPILE TIME POLYMORPHISM)
class student
{
public:
    string name;
    student()
    {
        cout << "non parameterized constructor called" << endl;
    }

    student(string name)
    {
        this->name = name;
        cout << "parameterized constructor called" << endl;
    }
};

// FUNCTION OVERLOADING (COMPILE TIME POLYMORPHISM)

class print
{
public:
    void show(int x)
    {
        cout << "Integer: " << x << endl;
    }
    void show(char ch)
    {
        cout << "Character: " << ch << endl;
    }
};

// FUNCTION OVERRIDING (RUN TIME POLYMORPHISM)

class parent
{
public:
    void getinfo()
    {
        cout << "This is parent class function" << endl;
    }

    // VIRTUAL FUNCTION (RUN TIME POLYMORPHISM)

    virtual void hello()
    {
        cout << "Hello, World!" << endl;
    }
};

class child : public parent
{
public:
    void getinfo()
    {
        cout << "This is child class function" << endl;
    };
    void hello()
    {
        cout << "Hello from child" << endl;
    }
};

int main()
{
    student s1;
    student s2("Rahul");
    print p;
    p.show(101);
    p.show('$');
    child c1;
    c1.getinfo();
    parent p1;
    p1.getinfo();
    child c2;
    c2.hello();
    return 0;
}