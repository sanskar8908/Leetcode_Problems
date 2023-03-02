#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        
        for(int i=1;i<n;i++)
        {
            if(i==0)
            {
                left[i]=0;
            }
            else{
                
                left[i]=left[i-1]+nums[i-1];
            }
        }
          for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                right[i]=0;
            }
            else{
                
                right[i]=right[i+1]+nums[i+1];
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};