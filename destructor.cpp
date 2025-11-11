// A destructor is also a special member function as a constructor. Destructor destroys the class objects created by the constructor.

// Destructor has the same name as their class name preceded by a tiled (~) symbol.

#include <iostream>
using namespace std;

class student
{

public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~student()
    {
        cout << "Destructor" << endl;
        delete cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name: " << name << ", Cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("rahul", 8.9);
    s1.getInfo();
    return 0;
}