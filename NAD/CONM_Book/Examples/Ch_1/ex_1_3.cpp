#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    int x, n;
    float term, s;

    cout<<"Series: s = x - x^3/3! + x^5/5! - x^7/7! + .... (-1)^n-1 * x^(2n-1)/(2n-1)!"<<endl;

    cout<<"Enter x and number of elements: ";
    cin>>x>>n;

    s=x;
    term=x;
    for(int i=1; i<n; i++){
        term = (-(x*x)*term)/(2*i*(2*i+1));
        s+=term;
    }

    cout<<"Sum: "<<s;

    return 0;
}