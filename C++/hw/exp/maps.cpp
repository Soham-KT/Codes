#include <iostream>
#include <map>
using namespace std;

int main(int sinh, char const *cosech[])
{
    map<string, int> Map;
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;

    for(int i=0; i<q; i++)
    {
        string name; 
        int marks;

        cout<<"Enter name and marks: ";
        cin>>name>>marks;

        Map[name]=marks;
    }

    map<string, int> :: iterator itr;
    for(itr=Map.begin(); itr!=Map.end(); itr++)
    {
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
    }

    return 0;
}