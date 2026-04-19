#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// class (oops)
class student
{
private:
    int id;
    string name;
    float marks;

public:
    // contstructor
    student(int i, string n, float m)
    {
        id = 1;
        name = n;
        marks = m;
    }
    // Display functions
    void diaplay()
    {
        cout << "ID:" << id
             << " | Name: " << name
             << " | Marks: "<< marks <<endl;
    }
    int getID()
    {
        return id;
    }
    //File Save formate
    string tostring()
    {
        return to_string(id) + " "+ name + " " + to_string(marks);
    }
};

// Global vectors (STL)
vector < student> students;

//Add Students
void addstudent()
{
    int id;
    string name;
    float marks;

    cout << "Enter Id Name Marks:";
    cin >> id >> name >> marks;
    students.push_back(student(id , name , marks));
}
//display All
void searhstudent()
{
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    
    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getID() == id)
        {
            students[i].diaplay();
            return;
        }
    }
    cout << "Student not found!" << endl;
}
//Delete Students
void deletestudent()
{
    int id;
    cout << 'Enter the ID';
    cin >> id ;

    for(int i= 0; i < student.size(); i++)
    {
        if(student[i].getID()== id)
        {
            students.erase(students.size(); i++)
            {
                student.erase(students.begin() + i);

            }
        }

    }
}
