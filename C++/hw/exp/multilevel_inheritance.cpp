#include <iostream>
using namespace std;

class student
{
    protected:
     int roll_no;
    
    public:
        void enter_rollno(int no)
        {
            roll_no=no;
        }
        void display_rollno()
        {
            cout<<"Roll Number is: "<<roll_no<<endl;
        }
};

class exam : public student
{
    protected:
        int maths, physics;
    
    public:
        void enter_marks(int x, int y)
        {
            maths=x;
            physics=y;
        }

        void display_marks()
        {
            cout<<"Marks in maths: "<<maths<<endl;
            cout<<"Marks in physics: "<<physics<<endl;
        }
};

class percentage : public exam
{
    protected:
        float perc;
    
    public:
        void show_result()
        {
            display_rollno();
            display_marks();
            perc=(maths+physics)/2.0;
            printf("The percentage of student is: %.2f", perc);
        }
};

int main()
{
    percentage s1;
    s1.enter_rollno(12345);
    s1.enter_marks(90, 95);
    s1.show_result();

    return 0;
}