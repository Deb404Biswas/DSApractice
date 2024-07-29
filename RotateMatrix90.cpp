#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>>&matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i!=j)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main()
{
    int n;
    cout<<"Enter row and column"<<endl;
    cin >> n;
    vector<vector<int>>matrix(n,vector<int>(n));
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            matrix[i][j]=ele;
        }
    }
    cout<<"The original matrix is as follows:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateMatrix(matrix,n);
    cout<<"The matrix after rotation is as follows"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}