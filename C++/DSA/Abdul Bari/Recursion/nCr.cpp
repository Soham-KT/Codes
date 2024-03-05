#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    if(r==0 || n==r) return 1;
    
    return (nCr(n-1, r-1)+nCr(n-1, r));
}

int main(int sinh, char const *cosech[])
{
    int n, r;
    cout<<"Enter value of n and r: ";
    cin>>n>>r;
    cout<<"The nCr is: "<<nCr(n,r);

    return 0;
}