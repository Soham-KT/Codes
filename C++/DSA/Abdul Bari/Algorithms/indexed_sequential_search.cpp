#include <iostream>
using namespace std;

void seq_search(int arr[], int start, int end, int ele){
    bool x=false;
    int i=start;
    for(i=start; i<=end; i++)
        if(arr[i]==ele){
            x=true;
            break;
        }
    if(x==false) cout<<"Element not found....."<<endl;
    else cout<<"Element found at: "<<i+1<<endl;

}

void index_seq_search(int arr[], int size, int ele){
    int index[size];
    int blk_s, len_ind=0, start, end;
    cout<<"Enter block size: ";
    cin>>blk_s;

    for(int i=0; i<size; i+=blk_s) index[len_ind++]=i;

    if(ele<arr[index[0]] || ele>arr[index[len_ind-1]]){
        cout<<"Element not found"<<endl;
        return;
    }
    else{
        for(int i=1; i<len_ind; i++)
            if(ele<=arr[index[i]]){
                start=index[i--];
                end=start+blk_s;
                break;
            }
        
    }
    seq_search(arr, start, end, ele);
}

int main(int sinh, char const *cosech[]){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    index_seq_search(arr, 10, 5);

    return 0;
}