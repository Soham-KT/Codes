#include <iostream>
using namespace std;

class matrix
{
    int mat[3][3];

public:
    matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[i][j] = 0;
            }
        }
    }
    void entry()
    {
        cout << "Enter a matrix:" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void disp()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    matrix add(matrix m)
    {
        matrix x;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                x.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }

        return x;
    }

    void tran()
    {
        matrix x;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                x.mat[j][i] = mat[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << x.mat[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    matrix mul(matrix m)
    {
        matrix x;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    x.mat[i][j] += mat[i][k] * m.mat[k][j];
                }
            }
        }

        return x;
    }
};

int main()
{
    matrix m1, m2, ma, mm;
    int op, choice;
    char q = 'y';

    m1.entry();
    m1.disp();
    m2.entry();
    m2.disp();

    while (q = 'y')
    {
        cout << endl
             << "Choices are: " << endl
             << "1) Add 2 matrices " << endl
             << "2) Multiply 2 matrices" << endl
             << "3) Transpose a matrix" << endl;
        cout << "Enter your choice: ";
        cin >> op;

        switch (op)
        {
        case 1:
            ma = m1.add(m2);
            ma.disp();
            break;

        case 2:
            mm = m1.mul(m2);
            mm.disp();
            break;

        case 3:
            cout << "Matrix 1 or 2: ";
            cin >> choice;

            if (choice == 1)
                m1.tran();
            else if (choice == 2)
                m2.tran();
            else
                cout << "Invalid entry";
            break;

        default:
            cout << "Invalid choice" << endl;
        }
        cout << "Do you want another choice?(y/n): ";
        cin >> q;
        if (q == 'n')
            break;
    }

    return 0;
}