#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    float x, n, term, s;

    cout<<"Series: ln(1+x) = x/1! - x^2/2! + x^3/3! - x^4/4! + ...."<<endl;

    cout<<"Enter x and number of terms: ";
    cin>>x>>n;

    s=x;
    term=x;
    for(int i=2; i<=n; i++){
        term=(-x*term)/i;
        s+=term;
    }

    cout<<"Sum: "<<s;

    return 0;
}