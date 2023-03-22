#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int k=0;
        while(sum<target && k<n)
        {
          sum=sum+nums[k];
          k++;
        }
        int min_length=INT_MAX;
        if(sum<target)
        {
          min_length=0;           
        }
        else{
            int possible=1;
            int i=0;
            int j=k;
             if(k<min_length && sum>=target)
                 {
                    min_length=k;
                 }
            while(possible==1)
            {
                possible=0;
              while(target<=sum && i<n)
              {
                 sum=sum-nums[i];
                 i++;
                 k--;
                 possible=1;
                 if(k<min_length && sum>=target)
                 {
                    min_length=k;
                 }
              }
              while(target>sum && j<n)
              {
                 sum=sum+nums[j];
                 j++;
                 k++;
                 possible=1;
                 if(k<min_length && sum>=target)
                 {
                    min_length=k;
                 }
              }
            }
        }
        return min_length;
    }
};