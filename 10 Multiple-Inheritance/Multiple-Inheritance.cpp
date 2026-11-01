#include <iostream>
using namespace std;

class BasicInfo
{
protected:
    int rollno;
    string name;

public:
    void getBasicInfo()
    {
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class DepartmentInfo
{
protected:
    string department;

public:
    void getDepartmentInfo()
    {
        cout << "Enter Department: ";
        cin >> department;
    }
};

class Student : public BasicInfo, public DepartmentInfo
{
public:
    void display()
    {
        cout << "\nStudent Information";
        cout << "\nRoll Number: " << rollno;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << department;
    }
};

int main()
{
    Student s;

    s.getBasicInfo();
    s.getDepartmentInfo();
    s.display();

    return 0;
}
