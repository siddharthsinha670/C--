// Student Report Card System – Input name, marks of subjects, aur output me percentage + grade.

#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int marks[5];
    float percentage;
    char grade;
    int total;

public:
    void input()
    {
        cout << "Enter the name of the student:";
        cin >> name;
        cout << "Enter the marks of 5 subject:";
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate()
    {
        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'c';
        else if (percentage >= 60)
            grade = 'd';
        else
            grade = 'f';
    }
    void display()
    {
        cout << "\n----Student report card----" << endl;
        cout << "Name:" << name << endl;
        cout << "Total Marks:" << total << endl;
        cout << "percentage:" << percentage << "%" << endl;
        cout << "Grade" << grade << endl;
    }
};
int main()
{
    student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}
