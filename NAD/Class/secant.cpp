#include <iostream>
using namespace std;

float f(float x){ return x*x*x - 3*x*x + x + 1; }

int main(int sinh, char const *cosech[]){
    float x0, x1, x2, e, f0, f1, f2;
    int n;

    cout<<"Enter x0, x1, e and n: ";
    cin>>x0>>x1>>e>>n;

    f0=f(x0);
    f1=f(x1);

    for(int i=0; i<n; i++){
        x2=(x0*f1-x1*f0)/(f1-f0);
        f2=f(x2);
        if(abs(f2)<=e){
            cout<<"Convergent solution: "<<x2<<endl;
            return 0;
        }
        else{
            x0=x1;
            x1=x2;
            f0=f1;
            f1=f2;
        }
    }

    cout<<"No convergent solutions"<<endl;

    return 0;
}