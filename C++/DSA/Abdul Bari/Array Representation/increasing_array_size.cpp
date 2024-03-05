#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[])
{
    int *p=new int[5];
    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

    cout<<"Before increasing size: ";
    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    int *q=new int[10];
    for(int i=0; i<5; i++)
    {
        q[i]=p[i];
    }

    delete[] p;
    p=q;
    q=NULL;

    p[5]=3;p[6]=5;p[7]=7;p[8]=9;p[9]=11;

    cout<<"After increasing size: ";
    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<" ";
    }

    return 0;
}