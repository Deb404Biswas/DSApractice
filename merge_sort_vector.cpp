#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a,int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int b[2*h];
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    for(;i<=mid;i++)
    b[k++]=a[i];
    for(;j<=h;j++)
    b[k++]=a[j];


    for(i=l;i<=h;i++)
    a[i]=b[i];
}

void display(vector<int>& a)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

void mergesort(vector<int>& a,int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main()
{
    vector<int> a;
    int n;
    cout<<"Enter the number of element in the list"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    cout<<"The original list of elements is as follows:"<<endl;
    display(a);
    mergesort(a,0,n-1);
    cout<<"The list of elements after sorting is as follows:"<<endl;
    display(a);
}