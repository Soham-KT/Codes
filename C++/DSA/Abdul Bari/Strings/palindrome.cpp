#include <iostream>
#include <string>
using namespace std;

class String
{
    string s;

    public:
        void entry()
        {
            cout<<"Enter string: ";
            getline(cin>>ws, s);
        }

        void display()
        {
            cout<<s<<endl;
        }

        int palindrome()
        {
            int n=s.length();
            for(int i=0; i<n/2; i++)
            {
                if(s[i]!=s[n-i-1]) return 0;
            }

            return 1;
        }
};

int main(int sinh, char const *cosech[])
{
    String s;
    s.entry();
    cout<<"String: ";
    s.display();
    cout<<"Checking for palindrome: ";
    int res=s.palindrome();
    if(res==1) cout<<"String is palindrome"<<endl;
    else cout<<"String is not palindrome"<<endl;

    return 0;
}