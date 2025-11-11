#include <iostream>
#include <string>
using namespace std;

// There are 5 types of Inheritance:
//
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance
// 4. Hierarchical Inheritance
// 5. Hybrid Inheritance

// ---------------- SINGLE INHERITANCE ----------------

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }
    void getInfo()
    {
        cout << "\n--- Single Inheritance ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

// ---------------- MULTILEVEL INHERITANCE ----------------

class BasePerson
{
public:
    string name;
    int age;
};

class Undergraduate : public BasePerson
{
public:
    int rollno;
};

class GraduateStudent : public Undergraduate
{
public:
    string researchArea;

    void showInfo()
    {
        cout << "\n--- Multilevel Inheritance ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

// ---------------- MULTIPLE INHERITANCE ----------------

class AcademicInfo
{
public:
    string name;
    int rollno;
};

class TeachingInfo
{
public:
    string subject;
    double salary;
};

class TeachingAssistant : public AcademicInfo, public TeachingInfo
{
public:
    void showDetails()
    {
        cout << "\n--- Multiple Inheritance ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

// ---------------- HIERARCHICAL INHERITANCE ----------------

class Base
{
public:
    string name;
    int age;
};

class Student1 : public Base
{
public:
    int rollno;
    void showStudent()
    {
        cout << "\n--- Hierarchical Inheritance (Student) ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

class Teacher : public Base
{
public:
    string subject;
    void showTeacher()
    {
        cout << "\n--- Hierarchical Inheritance (Teacher) ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

// ---------------- HYBRID INHERITANCE ----------------
// Combination of multiple + multilevel inheritance

class Researcher
{
public:
    string field;
};

class AssistantProfessor : public Base, public Researcher
{
public:
    string college;
    void showHybrid()
    {
        cout << "\n--- Hybrid Inheritance ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Field: " << field << endl;
        cout << "College: " << college << endl;
    }
};

// ---------------- MAIN FUNCTION ----------------

int main()
{
    // Single Inheritance
    Student s1("Rahul", 20, 101);
    s1.getInfo();

    // Multilevel Inheritance
    GraduateStudent g1;
    g1.name = "Neha";
    g1.age = 24;
    g1.researchArea = "Artificial Intelligence";
    g1.showInfo();

    // Multiple Inheritance
    TeachingAssistant t1;
    t1.name = "Amit";
    t1.subject = "Mathematics";
    t1.salary = 45000;
    t1.showDetails();

    // Hierarchical Inheritance
    Student1 st;
    st.name = "Priya";
    st.age = 19;
    st.rollno = 15;
    st.showStudent();

    Teacher te;
    te.name = "Mr. Sharma";
    te.age = 45;
    te.subject = "Physics";
    te.showTeacher();

    // Hybrid Inheritance
    AssistantProfessor ap;
    ap.name = "Dr. Verma";
    ap.age = 38;
    ap.field = "Machine Learning";
    ap.college = "IIT Bombay";
    ap.showHybrid();

    return 0;
}
