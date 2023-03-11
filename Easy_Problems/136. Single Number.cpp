#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
         unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
          m[nums[i]]++;
        }
        int ans;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if((*it).second==1)
            {
               ans=(*it).first;
               break;
            }
        }
        return ans;
    }
};