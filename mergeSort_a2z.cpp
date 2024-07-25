#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr, int l,int mid,int h)
{
    vector<int>temp;
    int i=l,j=mid+1;
    while(i<=mid && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    for(;i<=mid;i++)
    temp.push_back(arr[i]);
    for(;j<=h;j++)
    temp.push_back(arr[j]);
    for(int k=0;k<temp.size();k++)
    arr[l+k]=temp[k];
}
void mergeSort(vector<int>&arr, int l,int h)//call by reference else the mergeSort function function will copy the original vector after each recursive call.
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main()
{
    vector<int>arr;
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"Original array"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
    mergeSort(arr,0,n-1);
    cout<<"Array after merge sort"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
}