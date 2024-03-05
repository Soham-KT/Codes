#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    int x, n, term, s;

    cout<<"Enter x and number of elements: ";
    cin>>x>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter a-"<<i<<": ";
        cin>>a[i];
    }

    for(int i=0; i<n; i++) a[i]=a[i]*i;

    term=a[n-1];
    for(int i=n-1; i>1; i--) term=x*term +a[i-1];

    cout<<"Differenciation: "<<term;

    return 0;
}