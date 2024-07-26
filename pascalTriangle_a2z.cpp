#include<iostream>
#include<vector>
using namespace std;
void pascalTriangle(vector<vector<int>>&matrix, int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];
        }
    }
}
void displayPascal(vector<vector<int>>matrix, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j < n)
            cout<<matrix[i][j]<<" ";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        matrix[0][i]=1;
        matrix[i][0]=1;
    }
    cout<<"The matrix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    pascalTriangle(matrix,n);
    cout<<"The pascal's triangle is as follows:"<<endl;
    displayPascal(matrix,n);
}