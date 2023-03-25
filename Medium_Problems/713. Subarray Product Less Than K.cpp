#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int mul=1;
        int count=0;
        for(int j=0;j<n;j++)
        {
           mul=mul*nums[j];
           while(i<n && mul>=k)
           {
              mul=mul/nums[i];
              i++;
           }
           if(mul<k)
           {
              count=count+j-i+1;
           }
        }
        return count;
    }
};