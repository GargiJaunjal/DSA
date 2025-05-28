#include<iostream>
using namespace std;
int insertionsort(int arr[],int n)
{
    ////int curr=i;
    //int prev=i-1;
    for(int i=0;i<n;i++)
    {
        int curr=i;
        int prev=i-1; 
        while(prev>=0 && arr[prev]>curr)
        { 
        arr[prev+1]=arr[prev];
        prev--;
        }
    arr[prev+1]=curr;
    }
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
    insertionsort(arr,n);
    cout<<"Unsorted array";
    display(arr,n);
    cout<<"sorted array";
     return 0;
}

