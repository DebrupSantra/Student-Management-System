#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;
int main(){
    vector<Student>students;
    while(true){
        cout << "\n Student Management System \n";
cout << "1. Add Student\n";
cout << "2. Display Students\n";
cout << "3. Search Student\n";
cout << "4. Exit\n";
cout << "Enter your choice: ";
int choice;
cin >> choice;
switch(choice){
        case 1:
{
    Student s;
    s.input();
    students.push_back(s);
    break;
}
        case 2:
{
    for(int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }
    cout << "\nTotal Students: " << students.size() << endl;
    break;
}   
        case 3:
{
    int searchRoll;
    bool found = false;

    cout << "Enter Roll Number: ";
    cin >> searchRoll;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRoll() == searchRoll)
        {
            cout << "\nStudent Found!\n";
            students[i].display();
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Student not found!\n";
    }

    break;
}  
        case 4:
{
    cout << "Thank you for using Student Management System!\n";
    return 0;
}
  }

