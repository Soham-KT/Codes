#include <iostream>
using namespace std;

class point
{
    int x, y;

    public:
        point(){}

        point(int a, int b)
        {
            x=a; y=b;
        }

        point operator+(point p)
        {
            point p1;

            p1.x=x+p.x;
            p1.y=y+p.y;

            return p1;
        }

        void display()
        {
            cout<<"x: "<<x<<" y: "<<y<<endl;
        }
};

int main()
{
    point p1(3,4), p2(5,6), p3;

    p1.display();
    p2.display();
    p3=p1+p2;
    p3.display();

    return 0;
}