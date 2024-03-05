#include <iostream>
using namespace std;

float taylor(int x, int n)
{
    static int p=1, q=1;
    int sum;

    if(n==0) return 1;
    else
    {
        sum=taylor(x, n-1);
        p*=x;
        q*=n;
        return (sum+(p/q));
    }
}


int main(int sinh, char const *cosech[])
{
    int x, p;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>p;
    cout<<"The taylor series value of e^x is: "<<taylor(x,p);

    return 0;
}