//Constructors are special class members which are called by the compiler every time an object of that class is instantiated.
//Constructors have the same name as the class and may be defined inside or outside the class definition.
//There are 3 types of constructors:

//1. Default constructors
//2. Parameterized constructors
//3. Copy constructors

#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student() // default constructor / non parameterized constructor
    {
        cout << "Default constructor called!" << endl;
    }

    student(string s, int a, bool g) // parameterized constructor
    {
        name = s;
        age = a;
        gender = g;
    }

    student(student &a) // copy constructor
    {
        cout<<"Copy constructor called!" << endl;
        this->name = a.name;
        this->age = a.age;
    }

    void getInfo()
    {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << (gender ? "Male" : "Female") << endl;
    }
};

int main()
{
    student s1;                 // non parameterized constructor is called here
    student s2("Alice", 20, 1); // parameterized constructor is called here
    s2.getInfo();
    student s3(s1); // default copy constructor is called here
    student s4(s2); // user-defined copy constructor is called here
    s4.getInfo();
    return 0;
}