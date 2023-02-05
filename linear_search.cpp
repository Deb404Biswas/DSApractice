#include<iostream>
using namespace std;
int main()
{
    int n,key;
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index"<<i<<endl;
        cin>>a[i];
    }
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            f++;
            cout<<"The element entered is found at index"<<i<<endl;
        }
    }
    if(f==0)
    cout<<"Entered key element not found"<<endl;
}