#include <iostream>
#define no_of_bits 16
using namespace std;

void print_bin(int bin_arr[]){
    for(int i=0; i<no_of_bits/2; i++){
        int temp=bin_arr[i];
        bin_arr[i]=bin_arr[no_of_bits-i-1];
        bin_arr[no_of_bits-i-1]=temp;
    }

    for(int i=0; i<no_of_bits; i++) cout<<bin_arr[i];
}

void twos_comp(int bin_arr[]){
    bool check_first_one = false;
    for(int i=0; i<no_of_bits; i++){
        if(check_first_one){
            if(bin_arr[i]==1) bin_arr[i]=0;
            else bin_arr[i]=1;
        }
        else if(bin_arr[i]==1) check_first_one=true;
        else continue;
    }

    print_bin(bin_arr);
}

void int_to_bin(int num){
    int bin_arr[16]={0}, cpy, ctr;
    if(num>=0) cpy=num;
    else cpy=-(num);
    ctr=0;

    while(cpy>0){
        bin_arr[ctr]=cpy%2;
        cpy/=2;
        ctr++;
    }

    if(num>=0) print_bin(bin_arr);
    else twos_comp(bin_arr);

}

int main(int sinh, char const *cosech[]){
    int num;

    cout<<"Enter number: ";
    cin>>num;

    int_to_bin(num);

    return 0;
}

// 0000000110100100 : 420
// 1111111001011100 : -420