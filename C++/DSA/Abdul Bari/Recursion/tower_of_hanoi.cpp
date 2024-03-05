#include <iostream>
using namespace std;

void tower(int x, int A, int B, int C)
{
    if(x>0)
    {
        tower(x-1, A, C, B);
        cout<<"From tower "<<A<<" to tower "<<C<<endl;
        tower(x-1, B, A, C);
    }
}

int main(int sinh, char const *cosech[])
{
    tower(3, 1, 2, 3);

    return 0;
}