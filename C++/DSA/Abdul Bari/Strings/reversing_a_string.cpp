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

        void reverse()
        {
            int n=s.length();

            for(int i=0; i<n/2; i++)
            {
                char temp=s[i];
                s[i]=s[n-i-1];
                s[n-i-1]=temp;
            }
        }
};

int main(int sinh, char const *cosech[])
{
    String s;
    s.entry();
    cout<<"String: ";
    s.display();
    cout<<"Reversed string: ";
    s.reverse();
    s.display();

    return 0;
}