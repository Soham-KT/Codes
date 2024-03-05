#include <iostream>
using namespace std;

class marks
{
    string name, sub[5] = {"Physics", "Chemistry", "Maths", "Programming", "English"};
    int en_no, theory[5], practical[5], roll_no;

public:
    string grade(int x)
    {
        string gra;

        if(x>=90)
        {
            gra="A+";
        }
        
        else if(x>=80 && x<90)
        {
            gra="A";
        }

        else if(x>=70 && x<80)
        {
            gra="B+";
        }

        else if(x>=60 && x<70)
        {
            gra="B";
        }

        else if(x>=50 && x<60)
        {
            gra="C";
        }

        else if(x>=35 && x<50)
        {
            gra="P";
        }
        if(x<35)
        {
            gra="F";
        }

        return gra;
    }
    friend ostream &operator<<(ostream &output, marks &m);
    friend istream &operator>>(istream &input, marks &m);
};

ostream &operator<<(ostream &output, marks &m)
{
    output << "Student Name: " << m.name << endl
           << "Enrollment Number: " << m.en_no << endl
           << "Roll No: " << m.roll_no << endl
           << "Throry Grades: " << endl;

    for (int i = 0, x=0; i < 5; i++)
    {
        x=m.theory[i];
        output << m.sub[i] << ", Marks: " << x << " Grade: " << m.grade(x) << endl;
    }

    output << endl << "Practical Grades: " << endl;

    for (int i = 0, x=0; i < 5; i++)
    {
        x=m.practical[i];
        output << m.sub[i] << ", Marks: " << x << " Grade: " << m.grade(x) << endl;
    }

    return output;
}

istream &operator>>(istream &input, marks &m)
{
    cout << "Enter student name, enrollment number, roll number: ";
    input >> m.name >> m.en_no >> m.roll_no;
    cout << "Enter marks in theory: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << m.sub[i] << ": ";
        input >> m.theory[i];
    }

    cout << "Enter marks in practical: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << m.sub[i] << ": ";
        input >> m.practical[i];
    }

    return input;
}

int main()
{
    marks m1;
    cin >> m1;
    cout << m1;

    return 0;
}