#include <iostream>
using namespace std;

int fun(int x)
{
    if(x>100) return (x-10);
    else fun(fun(x+11));
}

int main(int sinh, char const *cosech[])
{
    cout<<fun(98);

    return 0;
}