#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[])
{
    int no, dummy, ans=0;
    bool x=false;

    cout<<"Enter a number to check for palindrome and prime: ";
    cin>>no;

    dummy=no; 
    while(dummy!=0)
    {
        ans=ans*10+(dummy%10);
        dummy/=10;
    }
    cout<<ans<<endl;

    if(ans==no) cout<<"The number is a palinrome"<<endl;
    else cout<<"The number is not a palindrome"<<endl;

    for(int i=2; i<=no/2; i++)
    {
        if(no%i==0)
        {
            x=true;
            break;
        }
    }

    if(x==true) cout<<"The number is not a prime"<<endl;
    else cout<<"The number is a prime"<<endl;

    return 0;
}