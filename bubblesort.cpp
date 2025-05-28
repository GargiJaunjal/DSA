#include<iostream>
using namespace std;
int bubble_sort(int n,int arr[])
{
    bool isSwap=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                bool isSwap=true;
            }
        }
        if(!isSwap)
        return 0;
    }
    //return -1;
}
int display(int arr[],int n)
{
    cout<<"Enter elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n,arr[n];
    cout<<"Enter number of elements in array";
    cin>>n;
    cout<<"Enter elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(n,arr);
    cout<<"Unsorted array";
    display(arr,n);
    cout<<"sorted array";
     return 0;
}
