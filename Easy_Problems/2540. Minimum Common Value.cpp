#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        set<int>s1;
        set<int>s2;
        for(int i=0;i<n1;i++)
        {
           s1.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++)
        {
           s2.insert(nums2[i]);
        }
        int ans=-1;
        if(s1.size()<s2.size())
        {
          for(auto it=s1.begin();it!=s1.end();it++)
          {
             if(s2.find((*it))!=s2.end())
             {
                ans=(*it);
                break;
             }
          } 
        }
        else{
           for(auto it=s2.begin();it!=s2.end();it++)
          {
             if(s1.find((*it))!=s1.end())
             {
                ans=(*it);
                break;
             }
          } 
        }
        return ans;
    }
};