#include <iostream>
using namespace std;

class shape
{
    protected: 
        string shape_;
    
    public:
        double x, y;
        void get_data()
        {
            cout<<"Enter the shape you want(triangle/rectangle): ";
            cin>>shape_;
            cout<<"Enter x: "; cin>>x;
            cout<<"Enter y: "; cin>>y;
        }

        virtual void display_area(){}

        string sha()
        {
            return shape_;
        }
};

class triangle : public shape
{
    protected:
        double area;

    public:
        double x_,y_; 
        void display_area()
        {
            area=(0.5)*x_*y_;
            cout<<"Area of the triangle: "<<area;
        }
};

class rectangle : public shape
{
    protected:
        double area;

    public: 
        double x_,y_; 
        void display_area()
        {
            area=x_*y_;
            cout<<"Area of the triangle: "<<area;
        }
};

int main()
{
    shape s;
    s.get_data();
    if(s.sha()=="triangle")
    {
        triangle t;
        t.x_=s.x;
        t.y_=s.y;
        t.display_area();
    }
    else if(s.sha()=="rectengle")
    {
        rectangle r;
        r.x_=s.x;
        r.y_=s.y;
        r.display_area();
    }

    return 0;
}