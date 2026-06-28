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
cout << "4. Delete Student\n";
cout << "5. Update Student\n";
cout << "6. Exit\n";
cout << "Enter your choice: ";
int choice;
cin >> choice;
switch(choice){
       case 1:
{
    Student s;
    s.input();
    students.push_back(s);

    cout << "\nStudent added successfully!\n";
    cout << "Vector size = " << students.size() << endl;

    break;
}
        case 2:
{
    cout << "Inside case 2";
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
    int deleteRoll;
    bool found = false;

    cout << "Enter Roll Number to delete: ";
    cin >> deleteRoll;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRoll() == deleteRoll)
        {
            students.erase(students.begin() + i);

            cout << "Student deleted successfully!\n";
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
    case 5:{
        int updateRoll;
        bool found=false;
        cout << "Enter roll number to update: ";
        cin >> updateRoll;
        for(int i = 0; i < students.size(); i++)
{
    if(students[i].getRoll() == updateRoll)
    {
       cout << "\nEnter the new details:\n";
       students[i].input();
       cout << "Student details successfully updated: ";
       found =true;
       break;
    }    
}
    if(!found){
        cout << "Student does not exist!\n";
    }
    break;
    }    
    case 6:
{
    cout << "Thank you for using Student Management System!\n";
    return 0;
}
  }
    }
}
