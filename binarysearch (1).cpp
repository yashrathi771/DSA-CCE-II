#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first = 0;
    int last = n-1;
    int mid;
    while (first<=last)
    {
        mid = (first+last)/2;
        if (a[mid]==x)
        {
            return mid;
        }
        else if (a[mid]<x)
        {
            first = mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n, x;
    int a[20];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter" << n <<" sorted integers:\n";
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the target element to search for:";
    cin>>x;
    int position = binary_search(a,n,x);
    if(position!= -1)
    cout<<"Element found at position:"<<position << endl;
    else
    cout<<"Element not found."<<endl;
    return 0;
}

//output
PS D:\YashRathi> g++ binarysearch.cpp -o binarysearch
PS D:\YashRathi> ./binarysearch
Enter the size of the array:4
Enter4 sorted integers:
1
10
50
40
Enter the target element to search for:50
Element found at position:2