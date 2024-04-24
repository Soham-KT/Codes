#include <iostream>
#include <vector>
using namespace std;

int fibRec(int n){
    // return 0 if n is 0 or return 1 if n is 1
    if(n == 0 || n == 1) return n;

    return fibRec(n-1) + fibRec(n - 2);
}

int fibMem(int n, vector<int> mem){
    // return 0 if n is 0 or return 1 if n is 1
    if(n == 0 || n == 1) return n;

    // if n is already calculated, return it 
    else if(mem[n] != -1) return mem[n];


    // calculating then storing the value of nth digit
    return mem[n] = fibMem(n - 1, mem) + fibMem(n - 2, mem);
}

int fibTab(int n){
    int tab[n + 1];

    for(int i = 0; i <= n; i++){
        // store 0 if n is 0 or store 1 if n is 1
        if(i == 0 || i == 1){
            tab[i] = i;
        }

        // calculating then storing the value of nth digit
        else{
            tab[i] = tab[i - 1] + tab[i - 2];
        }
    }

    // returing the final ans
    return tab[n];
}

int main(){
    // index  : 0 1 2 3 4 5 6 
    // values : 0 1 1 2 3 5 8 <- ans = 8

    int val = 6;

    // Through recursion
    cout << fibRec(val) << endl;

    // Through memoization
    vector<int> mem(val + 1, -1);
    cout << fibMem(val, mem) << endl;

    // Through tabulation
    cout << fibTab(val);

    return 0;
}