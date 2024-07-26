#include<iostream>
#include<vector>
using namespace std;
void setMatrix(vector<vector<int>>&matrix, int m, int n)
{
    vector<int>row(m,1);
    vector<int>col(n,1);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i]==0 || col[j]==0)
            matrix[i][j]=0;
        }
    }
}
int main()
{
    cout<<"Enter row and column size"<<endl;
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"Enter the value in the 2D matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"The original matrix is: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    setMatrix(matrix,m,n);
    cout<<"The set matrix is: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}