#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
      long int lb=0;
      long int ub=nums.size()-1;
      while(lb<=ub)
      {
         long int mid=lb+((ub-lb)/2);
         if(nums[mid]==target)
         {
            return true;
         }
         
    
          if((nums[lb] == nums[mid]) && (nums[ub] == nums[mid]))
            {
                lb++;
                ub--;
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
         else{
             if(target>nums[mid] && target<=nums[ub])
           {
              lb=mid+1;
           }
           else{
               ub=mid-1;
           }
         }
     
      } 
      return false; 
    }
};