#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        int min=nums[0];
        int max=nums[0];
        for(int i=0;i<n;i++)
        {
           if(min>nums[i])
           {
             min=nums[i];
           }
           if(max<nums[i])
           {
             max=nums[i];
           }
           m[nums[i]]++;
        }
        vector<int>v;
        for(int i=min;i<=max;i++)
        {
           if(m[i]>1)
           {
              v.push_back(i);
           }
        }
      return v;
    }
};