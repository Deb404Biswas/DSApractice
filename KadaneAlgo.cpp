//Kadane's algorithm is used to find the subarray with maximum sum.
//Subarray is continous memeory in an array which subsequence can be non-continous block of memeory in an array.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Kadane(vector<int>arr, int n)
{
    int si=-1,ei=-1,sum=0,c=0,msum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        si=i;
        sum+=arr[i];
        if(msum<sum)
        {
            msum=sum;
            ei=i;
        }

        if(sum<0)
        sum=0;
    }
    cout<<"The maximum subarray sum is: "<<msum<<" which is in the range "<<si<<" to "<<ei<<endl;
    cout<<"The array of maximum subarray sum is as follows: "<<endl;
    for(int i=si;i<=ei;i++)
    cout<<arr[i]<<" ";
    // cout<<"The maximum subarray sum is: "<<msum<<endl;
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"The original array is as follow:"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
    Kadane(arr,n);
}