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
            cout<<"Enter the size of square matrix: ";
            cin>>n;
            int x=n+1;
            cout<<"Enter "<<(x*(x-1))/2<<" elements: ";
            arr=new int[(x*(x-1))/2];
            for(int i=0; i<(x*(x-1))/2; i++)
            {
                cin>>arr[i];
            }
        }

        void display_col_maj()
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i<=j) cout<<arr[j*(j-1)/2+i-1]<<" "; // for row major
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }

        void set_col_maj(int i, int j, int ele)
        {
            if(i<=j)
            {
                arr[j*(j-1)/2+i-1]=ele;// for row major
            }
        }
        
        int get_col_maj(int i, int j)
        {
            if(i<=j)
            {
                return arr[j*(j-1)/2+i-1];// for row major
            }
            else return 0;
        }

        void display_row_maj()
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i<=j) cout<<arr[n*(i-1)-(i-2)*(i-1)/2+(j-i)]<<" "; // for col major
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }

        void set_row_maj(int i, int j, int ele)
        {
            if(i<=j)
            {
                arr[n*(i-1)-(i-2)*(i-1)/2+(j-i)]=ele;// for col major
            }
        }
        
        int get_row_maj(int i, int j)
        {
            if(i<=j)
            {
                return arr[n*(i-1)-(i-2)*(i-1)/2+(j-i)];// for col major
            }
            else return 0;
        }
};

int main(int sinh, char const *cosech[])
{
    matrix m;
    cout<<"Enter in upper triangle of row major matrix:\n";
    m.entry();
    cout<<"Row major matrix:\n";
    m.display_row_maj();

    int i, j;
    cout<<"Enter position (i,j) of element you want: ";
    cin>>i>>j;
    cout<<"Element: "<<m.get_row_maj(i,j)<<endl;

    int ele;
    cout<<"Enter new element and position(i,j) of element you want to replace: ";
    cin>>ele>>i>>j;
    m.set_col_maj(i,j,ele);
    cout<<"After setting new element:\n";
    m.display_col_maj();
    
    cout<<endl;
    cout<<"Enter in upper triangle of column major matrix:\n";
    m.entry();
    cout<<"Column major matrix:\n";
    m.display_col_maj();

    cout<<"Enter position (i,j) of element you want: ";
    cin>>i>>j;
    cout<<"Element: "<<m.get_col_maj(i,j)<<endl;

    cout<<"Enter new element and position(i,j) of element you want to replace: ";
    cin>>ele>>i>>j;
    m.set_col_maj(i,j,ele);
    cout<<"After setting new element:\n";
    m.display_col_maj();

    return 0;
}