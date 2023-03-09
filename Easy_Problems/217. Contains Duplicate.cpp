#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n=nums.size();
       unordered_map<int,int>m;
       for(int i=0;i<n;i++)
       {
          m[nums[i]]++;
       }   
       for(auto it=m.begin();it!=m.end();it++)
       {
           if((*it).second>1)
           {
              return true;
           }
       }
       return false;
    }
};