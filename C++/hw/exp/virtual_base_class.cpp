#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_no;

    public:
        void set_rollno(int a)
        {
            roll_no=a;
        }

        void show_rollno()
        {
            cout<<"Roll No: "<<roll_no<<endl;
        }
};

class academics : virtual public student
{
    protected:
        int maths, physics;

    public:
        void set_marks(int a, int b)
        {
            maths=a;
            physics=b;
        }

        void show_marks()
        {
            cout<<"Marks in maths: "<<maths<<" phyics: "<<physics<<endl;
        }
};

class sports : virtual public student
{
    protected:
        int score;

    public:
        void set_score(int a)
        {
            score=a;
        }

        void show_score()
        {
            cout<<"Sports score: "<<score<<endl;
        }
};

class result : public academics, public sports
{
    int total;

    public:
        void show_result()
        {
            total=maths+score+physics;
            show_rollno();
            show_marks();
            show_score();
            cout<<"Total: "<<total;
        }
};

int main()
{
    result s1;
    s1.set_rollno(12345);
    s1.set_marks(95, 99);
    s1.set_score(10);
    s1.show_result();

    return 0;
}