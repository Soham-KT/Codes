#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    public:
        void read()
        {
            cout<<"Enter binary number: ";
            cin>>s;
        }
        void chk_binary()
        {
            for(int i=0; i<s.length(); i++){
                if(s[i]!='0' && s[i]!='1'){
                    cout<<"Incorrect binary format"<<endl;
                    break;
                }
                
            }
        }

};

int main()
{
    binary bin;
    bin.read();
    bin.chk_binary();
}