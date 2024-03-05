#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

    public:
        void entry(int a, float b)
        {
            id=a;
            price=b;
        }

        void display()
        {
            cout<<"Id: "<<id<<" Price: "<<price<<endl;
        }
};

int main()
{
    int size=3, p;
    float q;
    shop *ptr= new shop[size];
    shop *temp=ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price for item "<<i+1<<": ";
        cin>>p>>q;

        ptr->entry(p,q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout<<"Item number: "<<j+1<<endl;
        temp->display();
        temp++;
    }

    return 0;
}