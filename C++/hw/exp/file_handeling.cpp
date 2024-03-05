#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("file_handeling.txt");
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);

    out<<"My name is "+name;

    out.close();

    ifstream in("file_handeling.txt");
    string disp;
    getline(in, disp);
    cout<<disp;

    in.close();

    return 0;
}