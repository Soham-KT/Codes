#include <iostream>
#include <vector>
using namespace std;

int kpTab(vector<int> &p, vector<int> &wt, int capacity){
    int tab[p.size() + 1][capacity + 1];

    for(int i = 0; i <= p.size(); i++){
        for(int j = 0; j <= capacity; j++){
            if(i == 0 || j == 0) tab[i][j] = 0;

            else if(wt[i - 1] > j) tab[i][j] = tab[i - 1][j];

            else tab[i][j] = max(tab[i - 1][j], p[i - 1] + tab[i - 1][j - wt[i - 1]]);
        }
    }

    return tab[p.size()][capacity];
}

int main(){
    

    return 0;
}