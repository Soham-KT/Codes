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

        void duplicates()
        {
            int dup=0;
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]==s[i+1] && s[i]!=dup)
                {
                    cout<<s[i]<<" ";
                    dup=s[i];
                }
            }
            cout<<endl;

            for(int i=0; i<s.length()-1; i++)
            {
                if(s[i]==s[i-1])
                {
                    int j=i+1;
                    while(s[j]==s[i]) j++;
                    cout<<s[i]<<" is duplicated "<<j-i<<" times"<<endl;
                    i=j-1;
                }
            }
        }

        void sort()
        {
            for(int i=0; i<s.length(); i++)
            {
                for(int j=0; j<s.length()-i-1; j++)
                {
                    if(s[j]>s[j+1])
                    {
                        char temp=s[j];
                        s[j]=s[j+1];
                        s[j+1]=temp;
                    }
                }
            }
        }
};

int main(int sinh, char const *cosech[])
{
    String s;
    s.entry();
    cout<<"String: ";
    s.display();
    s.sort();
    cout<<"Duplicates in string: ";
    s.duplicates();

    return 0;
}