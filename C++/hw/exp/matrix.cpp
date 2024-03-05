#include <iostream>
using namespace std;

class matrix
{
    int mat[2][2];

    public:
        void entry()
        {
            cout<<"Enter a matrix: "<<endl;
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cin>>mat[i][j];
                }
            }
        }

        void disp()
        {
            cout<<"matrix: "<<endl;
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }

        }

        matrix mult(matrix m1)
        {
            matrix m;
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    for(int k=0; k<2; k++){
                        m.mat[i][j]+=mat[i][k]*m1.mat[k][j];
                    }
                }
            }
            return m;
        }
};

int main()
{
    matrix m1, m2, m3;
    m1.entry();
    m1.disp();
    m2.entry();
    m2.disp();
    m3=m1.mult(m2);
    m3.disp();

    return 0;
}