#include <iostream>
using namespace std;

class Matrix{
    int matrix[3][3];

    public:
        Matrix(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    matrix[i][j]=0;
                }
            }
        }

        void entry(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cin>>matrix[i][j];
                }
            }
        }

        void display(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        Matrix addition(Matrix mat){
            Matrix mat_;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    mat_.matrix[i][j]=matrix[i][j]+mat.matrix[i][j];
            
            return mat_;
        }

        Matrix multiply(Matrix mat){
            Matrix mat_;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    for(int k=0; k<3; k++)
                        mat_.matrix[i][j]+=matrix[i][k]*mat.matrix[k][j];
            
            return mat_;
        }

        Matrix transpose(){
            Matrix mat_;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    mat_.matrix[i][j]=matrix[j][i];
            
            return mat_;
        }
};

int main(int sinh, char const *cosech[])
{
    int choice;
    Matrix mat1;
    
    while(true){
        Matrix mat2, mat3;
        cout<<"1)Enter in matrix\n2)Display Matrix\n3)Add matrices\n4)Multiply matrices\n5)Transpose matrix\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter in matrix: ";
                mat1.entry();
                cout<<"Entery completed"<<endl;
                break;
            
            case 2:
                mat1.display();
                break;
            
            case 3:
                cout<<"Enter another matrix: ";
                mat2.entry();
                mat3=mat2.addition(mat1);
                cout<<"Addition of the matrices: "<<endl;
                mat3.display();
                break;

            case 4:
                cout<<"Enter another matrix: ";
                mat2.entry();
                mat3=mat2.multiply(mat1);
                cout<<"Multipliaction of the matrices: "<<endl;
                mat3.display();
                break;

            case 5:
                cout<<"Transpose of matrix: "<<endl;
                mat3=mat1.transpose();
                mat3.display();
                break;

            default:
                cout<<"Invalid choice: ";
                break;
        }

        char q;
        cout<<"Another choice?(y/n): ";
        cin>>q;

        if(q=='n') break;
    }

    return 0;
}