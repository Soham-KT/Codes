#include <iostream>
using namespace std;

float f(float x){ return x*x-25; }

float f_(float x){ return 2*x; }

int main(int sinh, char const *cosech[]){
    float x0, x1, f0, f0_, e;
    int n;

    cout<<"Enter x0, e and n: ";
    cin>>x0>>e>>n;

    for(int i=0; i<n; i++){
        f0=f(x0);
        f0_=f_(x0);
        x1=x0-(f0/f0_);
        if(abs((x1-x0)/x1)<=e){
            cout<<"Convergent solution: "<<x1;
            return 0;
        }
        else x0=x1;
    }

    cout<<"No convergent solution"<<endl;

    return 0;
}