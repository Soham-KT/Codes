#include <iostream>
using namespace std;

class matrix
{
    int *arr, n;

    public:
        matrix()
        {
            arr={0};
        }

        void entry()
        {
            cout<<"Enter the size of matrix: ";
            cin>>n;
            cout<<"Enter "<<3*n-2<<" elements: ";
            arr=new int[3*n-2];
            for(int i=0; i<3*n-2; i++)
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
                    if(i-j==0) cout<<arr[n+i-2]<<" ";
                    else if(i-j==-1) cout<<arr[2*n+i-2]<<" ";
                    else if(i-j==1) cout<<arr[i-2]<<" ";
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }

        void set(int i, int j, int ele)
        {
            if(i-j==0) arr[n+i-2]=ele;
            else if(i-j==1) arr[i-2]=ele;
            else if(i-j==-1) arr[2*n+i-2]=ele;
            else return;
        }

        int get(int i, int j)
        {
            if(i-j==0) return arr[n+i-2];
            else if(i-j==1) return arr[i-2];
            else if(i-j==-1) return arr[2*n+i-2];
            else return 0;
        }

};

int main(int sinh, char const *cosech[])
{
    matrix m;
    m.entry();
    cout<<"Tri-diagonal martix:\n";
    m.display();
    
    int i, j, ele;
    cout<<"Enter coordinates of element you want: ";
    cin>>i>>j;
    cout<<"Element: "<<m.get(i,j)<<endl;

    cout<<"Enter new element and coords of element you want to replace: ";
    cin>>ele>>i>>j;
    m.set(i,j,ele);
    cout<<"Martix after replacing:\n";
    m.display();

    return 0;
}