#include <iostream>
using namespace std;

void fun1(int x) // tail recusrion
{
    if(x>0)
    {
        cout<<x<<" ";
        fun1(x-1);
    }
}

void fun2(int x) // head recusrion
{
    if(x>0)
    {
        fun2(x-1);
        cout<<x<<" ";
    }
}

int main(int sinh, char const *cosech[])
{
    int x=5;
    fun1(x);
    cout<<endl;
    fun2(x);

    return 0;
}