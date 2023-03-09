#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           m[nums[i]]++;
        }
        int ans;
        for(auto it=m.begin();it!=m.end();it++)
        {
           if((*it).second>n/2)
           {
              ans=(*it).first;
              break;
           }
        }
        return ans;
    }
};