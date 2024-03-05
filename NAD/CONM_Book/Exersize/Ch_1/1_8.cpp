#include <iostream>
using namespace std;

int main(int sinh, char const *cosech[]){
    int x, y;
    cout<<"Enter x and y coordinates: ";
    cin>>x>>y;

    if(x*x+y*y > 1) cout<<"The coordinate is not in 1st quadrant of unit circle"<<endl;

    else cout<<"The coordinate is in 1st quadrant of unit circle"<<endl;

    return 0;
}