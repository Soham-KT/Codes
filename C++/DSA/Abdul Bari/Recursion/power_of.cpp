#include <iostream>
using namespace std;

int power(int x, int n)
{
    if(n==0) return 1;
    else return (x*power(x, n-1));
}

int main(int sinh, char const *cosech[])
{
    cout<<"Fifth power of 2 is: "<<power(2,5);

    return 0;
}