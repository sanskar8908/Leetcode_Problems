#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        // int max=0;
        int cum_sum=0;
        for(int i=0;i<n;i++)
        {
          cum_sum=cum_sum+nums[i];
          if(cum_sum>max)
          {
            max=cum_sum;
          }
          if(cum_sum<0)
          {
             cum_sum=0;
          }
        }
        return max;
    }
};