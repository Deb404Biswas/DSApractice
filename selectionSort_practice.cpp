#include<iostream>
#include<vector>
#include <climits>
using namespace std;
void selectionSort(int n, vector<int>arr)
{
    // int min=INT_MAX,mini;
    int j=0;
    for(int j=0;j<n-1;j++)
    {
        int min=INT_MAX,mini;//The mini was declared outside the scope of the outer loop, as a result of which the min was stuck in the previous value and not getting updated when new pass starts.
        for(int i=j;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                mini=i;
            }
        }
        swap(arr[mini],arr[j]);
    }
    cout<<"New array"<<endl;
    for(auto it: arr)
    cout<<it<<" ";
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
    cout<<endl;
    selectionSort(n,arr);

}