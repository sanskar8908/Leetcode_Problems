#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pin_index=-1;
        for(int i=n-1;i>0;i--)
        {
           if(nums[i]>nums[i-1])
           {
               pin_index=i-1;
               break;
           }
        }
        //find the best number to swap;
           if(pin_index==-1)
           {
              sort(nums.begin(),nums.end());
           }
           else{
        int min_value_index=pin_index+1;

        for(int i=pin_index+1;i<n;i++)
        {
           if(nums[i]>nums[pin_index] && nums[i]<nums[min_value_index])
         {
            min_value_index=i;
         }
        }
        
        swap(nums[pin_index],nums[min_value_index]);
        sort(nums.begin()+pin_index+1,nums.end());
           } 
    }
};