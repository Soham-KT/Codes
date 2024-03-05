#include <iostream>
using namespace std;

class matrix
{
    int *arr, n;

    public:
        void entry()
        {
            cout<<"Enter size of matrix: ";
            cin>>n;
            cout<<"Enter "<<2*n-1<<" elements: ";
            arr=new int[2*n-1];
            for(int i=0; i<2*n-1; i++)
            {
                cin>>arr[i];
            }
        }

        void display()
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i<=j) cout<<arr[j-i]<<" ";
                    else cout<<arr[n+i-j-1]<<" ";
                }
                cout<<endl;
            }
        }

        int get(int i, int j)
        {
            if(i<=j) return arr[j-i];
            else return arr[n+i-j-1];
        }

        void set(int i, int j, int ele)
        {
            if(i<=j)  arr[j-i]=ele;
            else  arr[n+i-j-1]=ele;
        }
};

int main(int sinh, char const *cosech[])
{
    matrix m;
    m.entry();
    cout<<"Toeplitz matrix:\n";
    m.display();

    int i, j, ele;
    cout<<"Enter coords of element you want: ";
    cin>>i>>j;
    cout<<"Element: "<<m.get(i,j)<<endl; 

    cout<<"Enter new element and coords of element you want to replace: ";
    cin>>ele>>i>>j;
    m.set(i,j,ele);
    cout<<"Matrix after replacing:\n";
    m.display();

    return 0;
}