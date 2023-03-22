#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
       int lb=0;
       int ub=nums.size()-1;
       int min=6000;
       while(lb<=ub)
       {
           int mid=lb+(ub-lb)/2;
        
           if(nums[mid]<min)
           {
             min=nums[mid];
           }
         if(nums[lb]<=nums[mid])
         {
            if(min>nums[lb])
            {
              min=nums[lb];
            }
            lb=mid+1;
         }
         else{
            if(min>nums[mid+1])
            {
              min=nums[mid+1];
            }
            ub=mid-1;
         }
       }  
       return min;    
    }
};