#include <iostream>
#include <iomanip>
using namespace std;
class item
{
private:
    string name;
    int code;
    float cost;

public:
    void get_data()
    {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Code: ";
        cin >> code;
        cout << "Enter Cost: ";
        cin >> cost;
    }

    void display();
};
void item::display()
{
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::left, ios::adjustfield);
    cout << setw(20) << name;
    cout.setf(ios::right, ios::adjustfield);
    cout << code;
    cout.setf(ios::right, ios::adjustfield);
    cout << setw(20) << cost << endl;
}
int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    item abc[n];
    int count;

    for (int i = 0; i < n; i++)
    {
        char q;

        cout << "Do you want to enter data?(y/n): ";
        cin >> q;
        if (q == 'y')
        {
            abc[i].get_data();
            count++;
        }
        else
        {
            break;
        }
    }

    cout << endl;

    cout << "NAME" << setw(20) << "CODE" << setw(19) << "COST" << endl;
    for (int i = 0; i < 43; i++)
    {

        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < count; i++)
    {
        abc[i].display();
    }

    for (int i = count; i < n; i++)
    {
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::left, ios::adjustfield);
        cout << setw(20) << "- - -";
        cout.setf(ios::internal, ios::adjustfield);
        cout << "- - -";

        cout.setf(ios::right, ios::adjustfield);
        cout << setw(18) << "- - -" << endl;
    }

    for (int i = 0; i < 43; i++)
    {

        cout << "-";
    }

    return 0;
}