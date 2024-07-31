#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rangeInterval(vector<vector<int>>interval, int n)
{
    sort(interval.begin(),interval.end());
    vector<vector<int>>res;

    res.push_back(interval[0]);
    for(int i=1;i<interval.size();i++)
    {
        if(interval[i][0]<=res.back()[1])
        res.back()[1]=max(res.back()[1], interval[i][1]);
        else
        res.push_back(interval[i]);
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<"["<<res[i][0]<<","<<res[i][1]<<"]"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the no of rows in the matrix"<<endl;
    cin>>n;
    vector<vector<int>>interval(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        int st,en;
        cin>>st>>en;
        interval[i][0]=st;
        interval[i][1]=en;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"["<<interval[i][0]<<","<<interval[i][1]<<"]"<<endl;
    }
    rangeInterval(interval,n);
}