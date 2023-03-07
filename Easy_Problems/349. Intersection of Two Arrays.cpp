#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_set<int>s;
        for(int i=0;i<n1;i++)
        {
           for(int j=0;j<n2;j++)
           {
              if(nums1[i]==nums2[j])
              {
                 s.insert(nums1[i]);
              }
           }
        }
        vector<int>v;
        for(auto it=s.begin();it!=s.end();it++)
        {
           v.push_back((*it));
        }
        return v;
    }
};