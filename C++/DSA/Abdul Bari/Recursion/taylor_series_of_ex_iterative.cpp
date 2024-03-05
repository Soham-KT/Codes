#include <iostream>
using namespace std;

float taylor(int x, int n)
{
    float sum; 

    while(n!=0)
    {
        sum+=1+(x/n);
        n--;
    }

    return sum;
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