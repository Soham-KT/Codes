#include <iostream>
#include <math.h>
using namespace std;

class Term
{
    public:
        int coeff;
        int exp;
};

class Poly
{
    private:
        int non_zero;
        Term *polyEqua;
    public:
        Poly(int n)
        {
            non_zero=n;
            polyEqua = new Term[non_zero];
        }

        void read()
        {
            cout<< "Enter coefficient and exponent value: ";
            for (int i = 0; i < non_zero; i++)
            {
                cin>>polyEqua[i].coeff>>polyEqua[i].exp;
            } 
        }

        float result(int x)
        {
            float ans=0.0;
            for (int  i = 0; i < non_zero; i++)
            {
                ans+=polyEqua[i].coeff * pow(x,polyEqua[i].exp);
            }
            return ans;
        }

};

int main()
{
    Poly Po(2);
    Po.read();
    cout<<Po.result(5)<<endl;
    return 0;
}