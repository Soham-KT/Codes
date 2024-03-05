#include <iostream>
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

        int anagram(String s1)
        {
            int h[256]={0};
            for(int i=0; i<s.length(); i++)
            {
                h[s[i]-97]+=1;
            }

            for(int i=0; i<s1.s.length(); i++)
            {
                h[s[i]-97]-=1;
                if(h[s[i]-97]<0) return 0;
            }
            return 1;
        }
};

int main(int sinh, char const *cosech[])
{
    String s1, s2;
    s1.entry();
    cout<<"String 1: ";
    s1.display();
    cout<<"Enter another string:"<<endl;
    s2.entry();
    cout<<"String 2: ";
    s2.display();
    cout<<"Checking for anagram: ";
    int res=s1.anagram(s2);
    if(res==1) cout<<"Strings are anagram"<<endl;
    else cout<<"Strings are not anagram"<<endl;

    return 0;
}