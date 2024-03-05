#include <iostream>
#include <fstream>

using namespace std;

class item
{
protected:
    string item_name;
    int item_code;

public:
    void enter_item()
    {
        cout << "Enter item name: ";
        getline(cin >> ws, item_name);
        cout << "Enter item code: ";
        cin >> item_code;
    }
};

class item_detail : virtual public item
{
protected:
    string desc;

public:
    void enter_desc()
    {
        cout << "Enter item desc: ";
        getline(cin >> ws, desc);
    }
};

class bid : virtual public item
{
protected:
    int bid;

public:
    void enter_bid()
    {
        cout << "Enter starting bid: ";
        cin >> bid;
    }
};

class client : virtual public item
{
protected:
    int client_id;
    string client_name;

public:
    void enter_client()
    {
        cout << "Enter client name: ";
        getline(cin >> ws, client_name);
        cout << "Enter client ID: ";
        cin >> client_id;
    }
};

class auction_detail : public item_detail, public bid, public client
{
    string st;

public:
    void display()
    {
        ifstream in("Auction.txt");
        while (in.eof() == 0)
        {
            getline(in, st);
            cout << st << endl;
        }
        in.close();
    }

    void insert_data()
    {
        ofstream out("Auction.txt");
        out << "Item Name: " << item_name << endl;
        out << "Item Code: " << item_code << endl;
        out << "Item Description: " << desc << endl;
        out << "Starting Bid: " << bid << endl;
        out << "Client Name: " << client_name << endl;
        out << "Client ID: " << client_id;

        out.close();
    }
};

int main()
{
    auction_detail a;
    a.enter_item();
    a.enter_desc();
    a.enter_bid();
    a.enter_client();
    a.insert_data();
    a.display();

    return 0;
}