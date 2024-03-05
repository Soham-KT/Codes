#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(int sinh, char const *cosech[])
{
    vector<int> vec;
    int size, element;
    
    cout<<"Enter size of vector you want: ";
    cin>>size;
    
    cout<<"Enter in vector: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>element;
        vec.push_back(element);
    }

    display(vec);

    int ins, pos;
    cout<<"Enter element you want to insert and at what position: ";
    cin>>ins>>pos;

    vector<int> :: iterator ite = vec.begin();

    vec.insert(ite+(pos-1), ins);

    display(vec);

    return 0;
}