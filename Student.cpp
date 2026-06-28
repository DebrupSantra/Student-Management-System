#include "Student.h"
void Student::input()
{
    cout << "Enter the roll number: ";
    cin >> roll;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the marks: ";
    cin >> marks;
}
void Student::display(){
    cout << "\nRoll number: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
}
int Student::getRoll(){
    return roll;        
}
