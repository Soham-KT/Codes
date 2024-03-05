#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    int n, x, y;
    int temp_x, temp_y;

    cout<<"Enter size of square matrix: ";
    cin>>n;

    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"("<<i<<", "<<j<<") ";
            mat[i][j]=0;
        }
        cout<<endl;
    }
    cout<<"Enter location of 1(x, y): ";
    cin>>x>>y;
    system("cls");

    mat[x][y]=1;
    for(int i=2; i<=n*n; i++){
        temp_x=x;
        temp_y=y;

        if(x>=1) temp_x-=1;
        else temp_x=n-1;
        
        if(y>=1) temp_y-=1;
        else temp_y=n-1;
        
        if(mat[temp_x][temp_y]!=0){
            temp_x=(x+1)%n;    
            temp_y=y;    
        }
        
        mat[temp_x][temp_y]=i;
        x=temp_x;
        y=temp_y;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}