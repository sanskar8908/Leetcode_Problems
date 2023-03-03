#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n=nums.size();
       unordered_map<int,int>m;
       for(int i=0;i<n;i++)
       {
         m[nums[i]]=1;
       }  
       int ans;
       for(int i=0;i<=n+1;i++)
       {
          if(m[i]==0 && i!=0)
          {
            ans=i;
            break;
          }
       } 
       return ans;
    }
};