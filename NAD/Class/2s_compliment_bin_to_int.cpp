#include <iostream>
#include <cmath>
using namespace std;

void bin_to_int(int bin_arr[], int ctr, char sign){
    int num=0;
    for(int i=0; i<ctr; i++) if(bin_arr[i]==1) num+=pow(2, ctr-1-i);

    cout<<"Integer is: "<<sign<<num;
}

void twos_compliment(int bin_arr[], int ctr, char sign){
    bool check_first_one = false;
    for(int i=ctr-1; i>=0; i--){
        if(check_first_one){
            if(bin_arr[i]==1) bin_arr[i]=0;
            else bin_arr[i]=1;
        }
        else if(bin_arr[i]==1) check_first_one=true;
        else continue;
    }

    bin_to_int(bin_arr, ctr, sign);
}

int main(int sinh, char const *cosech[]){
    string bin_str;
    int bin_cpy, ctr=0, ele;
    int bin_ele[16];
    char sign;

    cout<<"Enter a 16-bit binary digit: ";
    cin>>bin_str;

    //-------------------------coyping int to array
	for(int i=0; bin_str[i]!='\0'; i++){
        if(bin_str[i]=='0') bin_ele[i]=0;
        else bin_ele[i]=1;
        ctr++;
    }

    // -------------------------check for msb
    if(bin_ele[0]==0){
        sign='+';
        bin_to_int(bin_ele, ctr, sign);
    }
    else{
        sign='-';
        twos_compliment(bin_ele, ctr, sign);
    }

    return 0;
}

// 0000000110100100 : 420
// 1111111001011100 : -420