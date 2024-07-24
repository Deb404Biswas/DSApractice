#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void bubbleSort(int n, vector<int> arr)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<"New Array"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
}
int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"The original array"<<endl;
    for(auto it: arr)
    cout<<it<<" ";
    cout<<endl;
    bubbleSort(n,arr);
}