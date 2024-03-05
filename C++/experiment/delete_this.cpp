#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

void sort() 
{ 
    
} 

int main(){
    string s = "aAbb";
    string ans = "";
    unordered_map<char, int> m;
    unordered_map<int, char> m_;

    for(int i = 0; i < s.length(); i++){
        cout << s[i] << endl;
        m[s[i]]++;
    }

    for(auto i: m){
        cout << i.first << " " << i.second << endl;
        m_[i.second] = i.first;
    }

    for(auto i: m_){
        cout << i.first << " " << i.second << endl;
        // while(i.second > 0){
        //     ans += i.first;
        //     i.second--;
        // }
    }

    cout << ans << endl;

    return 0;
}