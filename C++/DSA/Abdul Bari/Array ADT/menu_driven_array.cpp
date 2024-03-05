#include <iostream>
using namespace std;

class Array
{
    int *arr, size, length;

    public:
        void entry()
        {
            cout<<"Enter size of array: ";
            cin>>size;
            cout<<"Enter length of array (<=size): ";
            cin>>length;
            arr=new int[length];
            cout<<"Enter in array: ";
            for(int i=0; i<length; i++)
            {
                cin>>arr[i];
            }
        }

        void display()
        {
            for(int i=0; i<length; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void append(int x)
        {
            if(length<size)
            {
                arr[length]=x;
                length++;
            }
            else return;
        }

        void insert(int ele, int pos)
        {
            if(pos>=0 && pos<length && length<size)
            {
                for(int i=length; i>pos; i++)
                {
                    arr[i]=arr[i-1];
                }
                arr[pos]=ele;
                length++;
            }
            else return;
        }

        void remove(int ind)
        {
            for(int i=ind; i<length-1; i++)
            {
                arr[i]=arr[i+1];
            }
            length--;
        }

        int search(int ele)
        {
            for(int i=0; i<length; i++)
            {
                if(ele==arr[i])
                {
                    return i;
                }
            }
            return 0;
        }

        int get(int x)
        {
            if(x>=0 && x<length) return arr[x];
        }

        void set(int ind, int ele)
        {
            if(ind>=0 && ind<length) arr[ind]=ele;
            else return;
        }

        int max()
        {
            int max=arr[0];
            for(int i=0; i<length; i++)
            {
                if(max<arr[i]) max=arr[i];
            }

            return max;
        }
        
        int min()
        {
            int min=arr[0];
            for(int i=0; i<length; i++)
            {
                if(min>arr[i]) min=arr[i];
            }

            return min;
        }
        
        int sum()
        {
            int sum=0;
            for(int i=0; i<length; i++)
            {
                sum+=arr[i];
            }

            return sum;
        }
        
        float avg()
        {
            int sum=0;
            float avg;

            for(int i=0; i<length; i++)
            {
                sum+=arr[i];
            }

            avg=(float)sum/(float)length;

            return avg;
        }

        void reverse()
        {
            for(int i=0; i<length/2; i++)
            {
                int temp=arr[i];
                arr[i]=arr[length-i];
                arr[length-i]=temp;
            }
        }

        void sort()
        {
            for(int i=0; i<length; i++)
            {
                for(int j=0; j<length-i-1; j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }

        void insert_sorted(int pos, int ele)
        {
            if(pos>=0 && pos<length && length<size)
            {
                for(int i=length-1; i>=0; i--)
                {
                    if(ele<arr[i])
                    {
                        arr[i]=arr[i-1];
                    }   
                    else break;
                }
                arr[pos]=ele;
                length++;
            }
        }

        int is_sorted()
        {
            for(int i=1; i<length; i++)
            {
                if(arr[i]<arr[i-1])
                {
                    return 0;
                }
            }
            return 1;
        }

        void rearrange()
        {
            int i=0, j=length-1;
            while(i<j)
            {
                while(arr[i]<0) i++;
                while(arr[j]>=0) j--;
                if(i<j)
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        void merge(Array a1, Array a2)
        {
            size=a1.size+a2.size;
            length=a1.length+a2.length;
            int i=0;
            for(i; i<a1.length; i++)
            {
                arr[i]=a1.arr[i];
            }
            for(int j=0; j<a2.length; j++, i++)
            {
                arr[i]=a2.arr[j];
            }
        }

        void Union(Array a1, Array a2)
        {
            int i=0, j=0, k=0;
            while(i<a1.length && j<a2.length)
            {
                if(a1.arr[i]<a2.arr[j]) arr[k++]=a1.arr[i++];
                else if(a1.arr[i]>a2.arr[j]) arr[k++]=a2.arr[j++];
                else 
                {
                    arr[k++]=a1.arr[i++];
                    j++;
                }
            }
            for(; i<a1.length; i++) arr[k++]=a1.arr[i];
            for(; j<a2.length; j++) arr[k++]=a2.arr[j];

            length=k;
            size=a1.size+a2.size;
        }

        void intersection(Array a1, Array a2)
        {
            int i=0, j=0, k=0;
            while(i<a1.length && j<a2.length)
            {
                if(a1.arr[i]<a2.arr[j]) arr[k++]=a1.arr[i++];
                else if(a1.arr[i]>a2.arr[j]) arr[k++]=a2.arr[j++];
                else 
                {
                    arr[k++]=a1.arr[i++];
                    j++;
                }
            }
            length=k;
            size=a1.size+a2.size;
        }
};

int main(int sinh, char const *cosech[])
{
    char ch;
    Array a1;
    a1.entry();
    cout<<endl;
    do
    {
        int op;

        cout<<"1)Display\n2)Append\n3)Insert\n4)Remove\n5)Search\n6)Get\n7)Set\n8)Max\n9)Min\n10)Sum\n11)Average\n12)Reverse\n13)Sort\n14)Insert in sorted\n15)Check if sorted\n16)Rearrange(+ve and -ve elements)\n17)Merge\n18)Union\n19)Intersection\n";
        cout<<"Enter your choice:";
        cin>>op;

        if(op==1)
        {
            cout<<"Array: ";
            a1.display();
        }

        else if(op==2)
        {
            int ele;
            cout<<"Enter element to append: ";
            cin>>ele;
            a1.append(ele);
            cout<<"Element inserted"<<endl;
        }
            
        else if(op==3)
        {
            int ele, pos;
            cout<<"Enter element and position to insert: ";
            cin>>ele>>pos;
            a1.insert(ele, pos-1);
            cout<<"Element successfully inserted"<<endl;
        }

        else if(op==4)
        {
            int pos;
            cout<<"Enter position of element to remove: ";
            cin>>pos;
            a1.remove(pos);
            cout<<"Element successfully removed"<<endl;
        }            

        else if(op==5)
        {
            int res, ele;
            cout<<"Enter element to search: ";
            cin>>ele;
            res=a1.search(ele);
            if(res!=0) cout<<"Element found at: "<<res<<endl;
            else cout<<"Element not found"<<endl;
        }

        else if(op==6)
        {
            int ind;
            cout<<"Enter index of element you want: ";
            cin>>ind;
            cout<<"Element: "<<a1.get(ind);
        }

        else if(op==7)
        {
            int ele, ind;
            cout<<"Enter new element and index to set: ";
            cin>>ele>>ind;
            a1.set(ele, ind);
            cout<<"Element successfully swapped"<<endl;
        }

        else if(op==8)
        {
            cout<<"The maximum element in array is: "<<a1.max();
        }

        else if(op==9)
        {
            cout<<"The minimum element in array is: "<<a1.min();
        }

        else if(op==10)
        {
            cout<<"The summation elements in array is: "<<a1.sum();
        }

        else if(op==11)
        {
            cout<<"The average elements in array is: "<<a1.avg();
        }

        else if(op==12)
        {
            Array a2=a1;
            cout<<"The reverse array is: ";
            a2.reverse();
            a2.display();
        }

        else if(op==13)
        {
            a1.sort();
            cout<<"Sorted array: ";
            a1.display();
        }

        else if(op==14)
        {
            int ele, pos;
            cout<<"Enter element and position of element: ";
            cin>>ele>>pos;
            a1.insert_sorted(pos, ele);
        }

        else if(op==15)
        {
            int res=a1.is_sorted();
            if(res!=0) cout<<"Array is sorted"<<endl;
            else cout<<"Array is not sorted"<<endl;
        }

        else if(op==16)
        {
            cout<<"Rearranged array: ";
            a1.rearrange();
            a1.display();
        }

        else if(op==17)
        {
            Array a2=a1, a3;
            cout<<"Enter another array: ";
            a3.entry();
            a1.merge(a2,a3);
            cout<<"Array successfully merged"<<endl;
        }

        else if(op==18)
        {
            Array a2=a1, a3;
            cout<<"Enter another array: ";
            a3.entry();
            a1.Union(a2,a3);
            cout<<"Array successfully unioned"<<endl;
        }

        else if(op==19)
        {
            Array a2=a1, a3;
            cout<<"Enter another array: ";
            a3.entry();
            a1.Union(a2,a3);
            cout<<"Array successfully intersected"<<endl;
        }
            
        else
        {
            cout<<"Invalid Entry"<<endl;
        }

        cout<<"Another entry?(y/n): ";
        cin>>ch;
    }while(ch=='y');   
        

    return 0;
}