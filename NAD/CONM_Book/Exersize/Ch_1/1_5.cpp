#include <iostream>
#include <cmath>

using namespace std;

int main(int sinh, char const *cosech[]){
    float x, sum, s, p, q;
    int n;

    cout<<"Equation: S = (a0 + a1x + a2x^2 + a3x^3 + .... + anx^n)/px+q"<<endl;

    cout<<"Enter p, q, x and number of values: ";
    cin>>p>>q>>x>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter value of a-"<<i<<": ";
        cin>>a[i];
    }

    sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i]*pow(x, i);
    }

    s=sum/(p*x+q);

    cout<<"S: "<<s;

    return 0;
}