#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int x)
    {
        size = x;
        arr = new T[size];
    }

    T dotprod(vector &v)
    {
        T x = 0;
        for (int i = 0; i < size; i++)
        {
            x += arr[i] * v.arr[i];
        }

        return x;
    }
};

int main()
{
    vector<int> v1(3), v2(3);
    int sum = 0;

    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;

    sum = v1.dotprod(v2);

    cout << "The dot product is: " << sum;

    cout << endl;

    vector<float> v1f(3), v2f(3);
    float sumf = 0;

    v1f.arr[0] = 1.1;
    v1f.arr[1] = 2.1;
    v1f.arr[2] = 3.1;

    v2f.arr[0] = 4.1;
    v2f.arr[1] = 5.1;
    v2f.arr[2] = 6.1;

    sumf = v1f.dotprod(v2f);

    cout << "The dot product is: " << sumf;

    return 0;
}