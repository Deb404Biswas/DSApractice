#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int> &a, int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main()
{
    cout<<"Enter the no of elements in the list"<<endl;
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    cout<<"Elements before insertion sort is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    insertionsort(a,n);
    cout<<"Elements after insertion is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}