#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    int n;

    cout<<"Enter number of variables: ";
    cin>>n;

    int x[n], a[n][n+1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n+1; j++){
            cout<<"Enter a("<<i+1<<", "<<j+1<<"): ";
            cin>>a[i][j];
        }
    }

    for(int k=0; k<n; k++){
        for(int i=k+1; i<n; i++){
            int u=a[i][k]/a[k][k];
            for(int j=i; j<n+1; j++){
                a[i][j]-=a[k][j]*u;
            }
        }
    }

    x[n-1]=a[n-1][n]/a[n-1][n-1];
    for(int i=n-2; i>=0; i++){
        float sum=0;
        for(int j=i+1; j<n; j++){
            sum=sum+a[i][j]+x[j];
        }
        x[i]=(a[i][n+1]-sum)/a[i][i];
    }

    for(int i=0; i<n; i++){
        cout<<"x-"<<i+1<<": "<<x[i]<<endl;
    }


    return 0;
}