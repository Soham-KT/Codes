#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //using operator
    // int num1, num2, prod;
    // cout << "Enter num1 and num2: ";
    // cin >> num1 >> num2;

    // prod = num1 & num2;

    // cout << "The AND product of " << num1 << " and " << num2 << " is : " << prod;

    //manually
    int num1, num2, num3=0, i=0, k=0;
    int bin1[32], bin2[32], res[32];

    for(int j=31; j>=0; j--)
    {
        bin1[j]=0;
        bin2[j]=0;
        res[j]=0;
    }

    cout<<"Enter num1 and num2: ";
    cin>>num1>>num2;

    while(num1>0)
    {
        bin1[i]=num1%2;
        num1=num1/2;
        i++;
    }

    while(num2>0)
    {
        bin2[k]=num2%2;
        num2=num2/2;
        k++;
    }

    for(int j=31; j>=0; j--)
    {
        res[j]=bin1[j]*bin2[j];
    }

    for(int j=31; j>=0; j--)
    {
        if (res[j]==1)
        {
            num3+=pow(2,j);
        }
    }

    cout<<"AND product is: "<<num3;

    return 0;
}