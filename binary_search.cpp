#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the no of elements to be entered"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<endl;
        cin>>a[i];
    }
    int l,h,mid,key;
    cout<<"Enter the value of key"<<endl;
    cin>>key;
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"The key element is found at index "<<mid<<endl;
            return 0;
        }
        else if(key<a[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    cout<<"The element is not found"<<endl;
}