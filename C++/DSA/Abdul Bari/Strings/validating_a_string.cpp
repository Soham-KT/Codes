#include <iostream>
using namespace std;

int validate(string s)
{
    for(int i=0; s[i]!='\0'; i++)
    {
        if(!((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')||(s[i]==' '))) return 0;
    }
    return 1;
}

int main(int sinh, char const *cosech[])
{
    string s;
    cout<<"Enter a string: ";
    getline(cin>>ws, s);
    cout<<"Validating the string(A-Z, a-z, 0-9): ";
    int x=validate(s);
    if(x==1) cout<<"Valid string"<<endl;
    else cout<<"Invalid sting"<<endl;

    return 0;
}