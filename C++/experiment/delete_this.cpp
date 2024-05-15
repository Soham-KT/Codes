#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <stack>
using namespace std;

void display(vector<vector<int>> &mat){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        } cout << endl;
    } cout << endl;
}

void transpose(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    int temp = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;            
            }
        }
    }

    display(mat);
}

void flip(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    int mid = n / 2;
    int temp = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < mid; j++){
            temp = mat[i][j];
            mat[i][j] = mat[i][n - 1 - j];
            mat[i][n - 1 - j] = temp; 
        }
    }

    display(mat);
}

int main(){
    vector<vector<int>> mat(3, vector<int>(3));
    int x = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mat[i][j] = x;
            x++;
        }
    }

    display(mat);

    transpose(mat);

    flip(mat);


    return 0;
}