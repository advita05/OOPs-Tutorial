#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // propeeties/attributes
    string name;
    string dept;
    string subject;

    // methods/ member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    //setter
    void setSalary(double sal)
    {
        salary = sal;
    }

    //getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Advita";
    t1.dept = "CSE";
    t1.subject = "DSA";
    t1.setSalary(75000.50);
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}