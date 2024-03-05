#include <iostream>
using namespace std;

int add(int x)
{
    if(x==1) return 1;
    else return (add(x-1)+x);
}

int main(int sinh, char const *cosech[])
{
    cout<<"Sum of first 5 numbers is: "<<add(5);

    return 0;
}