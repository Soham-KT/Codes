#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    int x, n, s;

    cout<<"Series: s(x) = a0 + a1x + a2x^2 + a3x^3 + .... + anx^n"<<endl;
    
    cout<<"Enter x and number of elements: ";
    cin>>x>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter a-"<<i<<": ";
        cin>>a[i];
    }

    s=a[n-1];
    for(int i=n-1; i>0; i--){
        s=a[i-1]+x*s;
    }

    cout<<"Sum: "<<s;

    return 0;
}