//This alogrithm is also called Dutch National flag algorithm
#include<iostream>
#include<vector>
using namespace std;
void sortDutch(vector<int>&arr, int n)
{
    int l=0,mid=0,h=n-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr[l],arr[mid]);
            l++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[h]);
            h--;
        }
    }
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter 0,1,2 in unsorted order in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"The entered array is ass follows:"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
    sortDutch(arr,n);
    cout<<"The array after sorting is as follows:"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
}