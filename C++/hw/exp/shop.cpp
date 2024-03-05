#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
        void initcounter() {counter=0; };
        void getdata()
        {
            cout<<"Enter item of number "<<counter+1<<": ";
            cin>>itemid[counter];
            cout<<"Enter price: ";
            cin>>itemprice[counter];
            counter++;
        }
        void diplaydata()
        {
            for(int i=0; i<counter; i++){
                cout<<"The item ID of item "<<i+1<<" is: "<<itemid[i]<<endl;
                cout<<"The item Price of item "<<i+1<<" is: "<<itemprice[i]<<endl;
            }
        }
};

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.getdata();
    dukan.getdata();
    dukan.getdata();
    dukan.diplaydata();
}