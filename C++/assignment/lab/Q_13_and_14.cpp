#include <iostream>
using namespace std;

class shape
{
protected:
    string name, colour;

public:
    void entry()
    {
        cout << "Enter name and colour of shape: ";
        cin >> name >> colour;
    }

    virtual void show()
    {
        cout << "Name: " << name << endl
             << "Colour: " << colour << endl;
    }

    string color()
    {
        return colour;
    }

    string shape_()
    {
        return name;
    }
};

class triangle : public shape
{
protected:
    float base, height;

public:
    string color;
    void input()
    {
        cout << "Enter base and height of triange: ";
        cin >> base >> height;
    }

    void show()
    {
        cout << "Name: Triangle\nColor: " << colour << endl
             << "Base: " << base << endl
             << "Height: " << height << endl
             << "Area: " << (0.5 * base * height) << endl;
    }
};

int main()
{
    shape s;

    s.entry();
    
    if(s.shape_()=="triangle")
    {
        triangle t;
        t.color=s.color();
        t.input();
        t.show();
    }

    else
    {
        s.show();
    }

    return 0;
}