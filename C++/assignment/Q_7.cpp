#include <iostream>
using namespace std;

class rectangle
{
    float len, bre;

    public:
        void setlength(float a)
        {
            len=a;
        }

        void setbreadth(float a)
        {
            bre=a;
        }

        float perimeter()
        {
            float peri;
            peri=2*(len+bre);

            return peri;
        }

        float area()
        {
            float area;
            area=len*bre;

            return area;
        }

        void show()
        {
            cout<<"Length: "<<len<<endl<<"Breadth: "<<bre<<endl;
        }

        int samearea(rectangle a)
        {
            int con;
            if(len*bre==a.len*a.bre)
            con=1;
            else
            con=0;

            return con;
        }
};

int main()
{
    rectangle r1, r2;
    float r1_a, r1_p, r2_a, r2_p, same_ar;
    r1.setbreadth(6.3);
    r1.setlength(15);
    r1.show();
    r2.setbreadth(18.9);
    r2.setlength(5);
    r2.show();
    r1_a=r1.area();
    r2_a=r2.area();
    r1_p=r1.perimeter();
    r2_p=r2.perimeter();

    cout<<"Area and perimeter of rectangle 1 is: "<<r1_a<<", "<<r1_p<<endl;
    cout<<"Area and perimeter of rectangle 2 is: "<<r2_a<<", "<<r2_p<<endl;

    same_ar=r1.samearea(r2);
    if(same_ar==1)
    cout<<"Area of 2 ractangles is same"<<endl;
    else
    cout<<"Area of 2 rectanges is not same"<<endl;

    return 0;
}