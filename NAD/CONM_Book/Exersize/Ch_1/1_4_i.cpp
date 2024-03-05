#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    float x, n;
    float term, s;

    cout<<"Series: cos(x): 1 - x^2/2! + x^4/4! - x^6/6! + ...."<<endl;

    cout<<"Enter x and number of elements: ";
    cin>>x>>n;

    s=1;
    term=1;
    for(int i=1; i<n; i++){
        term = (-(x*x)*term)/(2*i*(2*i-1));
        s+=term;
    }

    cout<<"Sum: "<<s;

    return 0;
}