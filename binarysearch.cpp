#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,arr[n],key,i;
    cout<<"Enter number of elements in array";
    cin>>n;
    cout<<"Enter elements in array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to search";
    cin>>key;
    int result=BinarySearch(arr,n,key);
    if(result!=-1)
    {
        cout<<"Element found at index:"<<result<<endl;
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
    
    
}