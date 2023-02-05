#include<iostream>
using namespace std;

void display(int* a,int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    cout<<endl;
}

void merge(int* a, int l,int mid,int h)
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

void mergesort(int* a,int l,int h)
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
    int n;
    cout<<"Enter the number of elements in the list"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"The original list is as follows:"<<endl;
    display(a,n);
    mergesort(a,0,n-1);
    cout<<"The elements of the list after sorting is as follows:"<<endl;
    display(a,n);
}