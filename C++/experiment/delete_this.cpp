#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

bool validP(string s){
    int i = 0, j = s.size() - 1;
    while(i < j){
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        
        if(tolower(s[i]) != tolower(s[j])) return false;
        
        else{
            i++;
            j--;
        }
    }

    return true;
}

int main(){
    
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << (validP("hello") ? "Yes" : "No");

    return 0;
}