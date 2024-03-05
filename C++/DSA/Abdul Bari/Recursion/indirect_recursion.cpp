#include <iostream>
using namespace std;

void funB(int);

void funA(int x) // Function A
{
    if(x>0)
    {
        cout<<x<<" ";
        funB(x-1); // To function B
    }
}

void funB(int x) // Function A
{
    if(x>0)
    {
        cout<<x<<" ";
        funA(x/2); // To function A
    }
}

int main(int sinh, char const *cosech[])
{
    int x=20;
    funA(x);

    return 0;
}