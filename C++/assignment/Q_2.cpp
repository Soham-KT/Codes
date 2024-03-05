#include <iostream>
using namespace std;

class student
{
    int admno;
    char sname[20];
    float eng, math, sci, total;

public:
    void takedata()
    {
        cout << "\nEnter admission number: ";
        cin >> admno;
        cout << "Enter marks in eng: ";
        cin >> eng;
        cout << "Enter marks in math: ";
        cin >> math;
        cout << "Enter marks in science: ";
        cin >> sci;
    }

    void showdata()
    {
        cout << "\nThe Admission number is " << admno << endl
             << "Marks in eng: " << eng << endl
             << "Marks in maths: " << math << endl
             << "Marks in science: " << sci << endl
             << "Total: " << total << endl;
    }

    void ctotal()
    {
        total = eng + math + sci;
    }
};

int main()
{
    student s1, s2;
    s1.takedata();
    s2.takedata();
    s1.ctotal();
    s2.ctotal();
    s1.showdata();
    s2.showdata();

    return 0;
}