#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n;
        n=nums.size();
        int max;
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
           s.insert(nums[i]);
        }
        if(s.size()<3)
        {
           max=*max_element(nums.begin(),nums.end());
           return max;
        }

        max=*max_element(nums.begin(),nums.end());
         for(auto i=nums.begin();i!=nums.end();i++)
         {
            if((*i)==max)
            {
               nums.erase(i);
               i--;
            }
         }

        max=*max_element(nums.begin(),nums.end());
       for(auto i=nums.begin();i!=nums.end();i++)
         {
            if((*i)==max)
            {
               nums.erase(i);
               i--;
            }
         }
      
        max=*max_element(nums.begin(),nums.end());
        return max;
    }
};