#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
           m1[nums1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
           m2[nums2[i]]++;
        }
        vector<int>v;
        for(auto it=m1.begin();it!=m1.end();it++)
        {
           if(m2.find((*it).first)!=m2.end())
           {
               int n=min(m1[(*it).first],m2[(*it).first]);
               for(int i=0;i<n;i++)
               {
                  v.push_back((*it).first);
               }
           }
        }
        return v;
    }
};