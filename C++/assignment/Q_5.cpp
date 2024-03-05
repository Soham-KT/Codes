#include <iostream>
using namespace std;

float volume(float r)
{
    float vol;
    
    vol=(4/3)*3.1415*r*r*r;

    return vol;
}

float volume(float l, float b, float h)
{
    float vol;

    vol=l*b*h;

    return vol;
}

float volume(float r, float h)
{
    float vol;

    vol=3.1415*r*r*h;

    return vol;
}

int main()
{
    float r_s, r_c, h_cy, h_cu, len, bre, vol_sp, vol_cy, vol_cu;
    
    cout<<"Enter radius for sphere: ";  
    cin>>r_s;  
    cout<<"Enter radius for cylinder: ";    
    cin>>r_c;
    cout<<"Enter height for cylinder: ";
    cin>>h_cy;
    cout<<"Enter length for cuboid: ";
    cin>>len;
    cout<<"Enter breadth for cuboid: ";
    cin>>bre;
    cout<<"Enter height for cuboid: ";
    cin>>h_cu;

    vol_sp=volume(r_s);
    vol_cy=volume(r_c, h_cy);
    vol_cu=volume(len, bre, h_cu);

    cout<<"Volume of sphere is: "<<vol_sp<<endl;
    cout<<"Volume of cuboid is: "<<vol_cu<<endl;
    cout<<"Volume of cylinder is: "<<vol_cy<<endl;

    return 0;
}