#include <iostream>
using namespace std;

class maxHeap{
    public:
        int arr[100];
        int size = 0;

        void insert(int data){
            size++;

            int index = size;
            arr[index] = data;

            while(index > 1){
                int parent = index / 2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }

                else{
                    return;
                }
            }
        }

        void deleteFromHeap(){
            if(size == 0){
                cout << "Nothing to delete" << endl;
                return;
            }

            arr[1] = arr[size];
            size--;

            int i = 1;
            while(i < size){
                int leftIndex = 2 * i;
                int rightIndex = 2 * i + 1;

                if(leftIndex < size && arr[leftIndex] > arr[i]){
                    swap(arr[leftIndex], arr[i]);
                    i = leftIndex;
                }

                else if(rightIndex < size && arr[rightIndex] > arr[i]){
                    swap(arr[rightIndex], arr[i]);
                    i = rightIndex;
                }

                else return;
            }
        }

        void print(){
            for(int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= size && arr[largest] < arr[left]){
        largest = left;
    }

    else if(right <= size && arr[largest] < arr[right]){
        largest = right;
    }

    if (largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        swap(arr[1], arr[size]);
        size--;

        heapify(arr, size, 1);
    }
}

int main(){
    maxHeap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 55, 53, 52, 50}, n = 5;

    // heap creation
    for(int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }

    cout << "Printing the heap: ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    // heap sort
    heapSort(arr, n);

    cout << "Sorting array using heap sort: ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}