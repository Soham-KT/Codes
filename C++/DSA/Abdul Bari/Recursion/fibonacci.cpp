#include <iostream>
using namespace std;

int fib(int x)
{
    if(x<=1) return x;
    
    return (fib(x-2)+fib(x-1));
}

int main(int sinh, char const *cosech[])
{
    cout<<"6th element of fibonacci series is: "<<fib(6);

    return 0;
}