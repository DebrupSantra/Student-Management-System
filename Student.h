#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int age;
    float marks;
public:
    void input();
    void display();
    int getRoll();
};
#endif