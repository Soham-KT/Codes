#include <iostream>
using namespace std;

class product
{
    string name;
    int mrp, disc;
    float sp;

public:
    void entry()
    {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> mrp;
        cout << "Enter discount you want: ";
        cin >> disc;
    }

    void disp()
    {
        cout << "Product name: " << name << endl
             << "Orignal Price: " << mrp << endl
             << "Selling price: " << sp;
    }

    void sell()
    {
        sp=mrp*(1-disc/100.0);
    }
};

int main()
{
    product pro;
    pro.entry();
    pro.sell();
    pro.disp();

    return 0;
}