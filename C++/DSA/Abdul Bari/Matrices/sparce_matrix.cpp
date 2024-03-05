#include <iostream>
using namespace std;

class element
{
    public:
        int i, j, x;
};

class sparse 
{
    int m, n, num;
    element *ele;

    public:
        sparse(){}

        sparse(int m, int n, int num)
        {
            this->m=m;
            this->n=n;
            this->num=num;
            ele=new element[num];
        }
        void entry()
        {
            cout<<"Enter the number of rows and columns in the matrix: ";
            cin>>m>>n;
            cout<<"Enter the number of elements you want to enter(<="<<m*n<<"): ";
            cin>>num;
            ele=new element[num];
            cout<<"Enter the elements in format(row number, column number, element):\n";
            for(int i=0; i<num; i++)
            {
                cin>>ele[i].i>>ele[i].j>>ele[i].x;
            }
        }

        void display()
        {
            int k=0; 
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(ele[k].i==i && ele[k].j==j)
                    {
                        cout<<ele[k++].x<<" ";
                    }
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }

        sparse operator+(sparse &s)
        {
            int i=0, j=0, k=0;
            if(n!=s.n && m!=s.m) return sparse(0,0,0);
            sparse *sum=new sparse(m, n, num+s.num); //constructor
            
            while(i<num && j<s.num)
            {
                if(ele[i].i<s.ele[j].i) sum->ele[k++]=ele[i++];
                else if(ele[i].i>s.ele[j].i) sum->ele[k++]=s.ele[j++];
                else
                {
                    if(ele[i].j<s.ele[j].j) sum->ele[k++]=ele[i++];
                    else if(ele[i].j>s.ele[j].j) sum->ele[k++]=s.ele[j++];
                    else
                    {
                        sum->ele[k]=ele[i];
                        sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
                    }
                }
            }

            for(;i<num; i++) sum->ele[k++]=ele[i];
            for(;j<s.num; j++) sum->ele[k++]=s.ele[j];
            sum->num=k;

            return *sum;
        }
};

int main(int sinh, char const *cosech[])
{
    sparse s1, s2, sum;
    cout<<"Enter 1st sparse matrix:\n";
    s1.entry();
    cout<<"\nMatrix:\n";
    s1.display();

    cout<<"\nEnter 2nd sparse matrix:\n";
    s2.entry();
    cout<<"\nMatrix:\n";
    s2.display();

    cout<<"Addition of these 2:\n";
    sum=s1+s2;
    sum.display();

    return 0;
}