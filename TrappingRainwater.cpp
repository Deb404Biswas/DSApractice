#include<iostream>
#include<vector>
using namespace std;
int TrappedRainWater(vector<int>height)
{
    int res=0;
    int l=0,r=height.size()-1;
    int lmax=0,rmax=0;
    while(l<=r)
    {
        if(height[l]<=height[r])
        {
            if(height[l]<lmax)
            res+=lmax-height[l];
            else
            lmax=height[l];
            l++;
        }
        else
        {
            if(height[r]<rmax)
            res+=rmax-height[r];
            else
            rmax=height[r];
            r--;
        }
    }
    return res;
}
int main()
{
    cout<<"Enter the height of the landscape and enter -1 to end the height vector"<<endl;
    vector<int>height;
    while(true)
    {
        int ele;
        cin>>ele;
        if(ele==-1)
        break;
        else
        height.push_back(ele);
    }
    cout<<"The height of the landscape is as follows:"<<endl;
    for(auto it:height)
    cout<<it<<" ";
    int trappedrain=TrappedRainWater(height);
    cout<<"The total rainwater that would be trapped in the landscape is: "<<trappedrain<<endl;
}