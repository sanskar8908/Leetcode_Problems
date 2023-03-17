#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb=0;
        int ub=nums.size()-1;
        while(lb<=ub)
        {
            int mid=lb+((ub-lb)/2);
            if(target==nums[mid])
            {
                 return mid;
            }
            else if(nums[lb]<=nums[mid])
            {
              if(target>=nums[lb] && target<nums[mid])
              {
                 ub=mid-1;
              }
              else{
                  lb=mid+1;
              }
            }
            else
            {
              if(target>=nums[mid] && target<nums[lb])
              {
                 lb=mid+1;
              }
              else{
                  ub=mid-1;
              }
            }
        }
        return -1;
    }
};