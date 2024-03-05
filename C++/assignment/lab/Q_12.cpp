#include <iostream>
using namespace std;

int count = 0;

class insurance
{
    int insurance_no, time_period, person_age;
    float invested_amt;

public:
    insurance()
    {
        insurance_no = 1;
        invested_amt = 0;
        time_period = 0;
        person_age = 18;
        count++;
        cout << "Constructor called for object: " << count;
    }

    insurance(int no, float amt, int time, int age)
    {
        insurance_no = no;
        invested_amt = amt;
        time_period = time;
        person_age = age;
        count++;
        cout << "Constructor called for object: " << count << endl;
    }

    ~insurance()
    {
        cout << "Destructor called for object: " << count << endl;
        count--;
    }

    void display()
    {
        if (person_age >= 18)
            cout << "Insurace number: " << insurance_no << endl
                 << "Invested amount: " << invested_amt << endl
                 << "Time period: " << time_period << endl
                 << "Age: " << person_age << endl;

        else
            cout << "Person must be greater than 18" << endl;
    }
};

int main()
{
    insurance p1(12345, 500, 3, 25), p2(67890, 500, 3, 12);

    p1.display();
    p2.display();

    return 0;
}