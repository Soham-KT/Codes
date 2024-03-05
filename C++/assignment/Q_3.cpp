#include <iostream>
using namespace std;

class flight
{
    int flt_no;
    char dest[100];
    float dist, fuel;
    void calfuel()
    {
        if (dist <= 1000)
            fuel = 500.0;
        else if (dist > 1000 && dist <= 2000)
            fuel = 1100.0;
        else
            fuel = 2200.0;
    }

public:
    void feedinfo()
    {
        cout << "Enter flight number: ";
        cin >> flt_no;

        cout << "Enter destination: ";
        cin >> dest;

        cout << "Enter distance: ";
        cin >> dist;

        calfuel();
    }

    void showinfo()
    {
        cout << "Flight number: " << flt_no << endl
             << "Destination: " << dest << endl
             << "Distance: " << dist << endl
             << "Fuel: " << fuel;
    }
};

int main()
{
    flight f1;
    f1.feedinfo();
    f1.showinfo();

    return 0;
}