#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
    cout<<"Enter the no of elements in the array"<<endl;
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int max=INT_MIN,mini;
    for(int i=0;i<n;i++)
    {
        mini=arr[i];
        if(mini>max)
        max=mini;
    }
    vector<int>arr1(max,0);
    for(int i=0;i<n;i++)
    {
        arr1[i]++;
    }
    for(int i=0;i<=max;i++)
    {
        int ele=arr1[i];
        if(ele!=0)
        cout<<i<<" occurs "<<arr1[i]<<" times in the array"<<endl;
    }
}