#include <iostream>
#include <fstream>
using namespace std;

class item
{
    string name;
    int price;

    public: 
        void entry()
        {
            cout<<"Enter name and price: ";
            cin>>name>>price;
        }

        string modify()
        {
            string fin, name_, price_;

            cout<<"Enter new name and price: ";
            cin>>name_>>price_;

            fin="Name :"+name_+", Price: "+price_+"\n";

            return fin;
        }

        void display()
        {
            string str;
            ifstream in("stock.dat");
            while(in.eof()==0)
            {
                getline(in, str);
                cout<<str<<endl;
            }

            in.close();
        }

        string na(){return name;}
        int pri(){return price;}
};

int main(int sinh, char const *cosech[])
{
    ofstream out("stock.dat");
    ifstream in("stock.dat");
    item it;
    string lm, jk, nm, pr;
    int op;
    char q='y';
    while(q=='y')
    {
        cout<<"1) Add item\n2) Modify item\n3) Display items\n";
        cout<<"Enter option: ";
        cin>>op;

        switch(op)
        {
            case 1:
                it.entry();
                out<<"Name: "<<it.na()<<", Price: "<<it.pri()<<endl;
                break;
            
            case 2:
                cout<<"Enter name and price off item you want to modify: ";
                cin>>nm>>pr;
                jk="Name: "+nm+", Price: "+pr+"\n";
                lm=it.modify();
                while(in.eof()==0)
                {
                    string str;
                    getline(in, str);
                    if(str==jk)
                    {
                        out<<lm<<endl;
                    }
                }

                break;
            
            case 3:
                it.display();
                break;
            
            default:
                cout<<"Invalid entry"<<endl;
                break;
        }

        cout<<"Another entry?(y/n): ";
        cin>>q;

        if(q!='y')
        break;
    }

    return 0;
}