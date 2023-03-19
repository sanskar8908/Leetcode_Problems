#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int number=INT_MIN;
        int count=0;
        int index=0;
        for(int i=0;i<n;i++)
        {
             if(number==nums[i] && count<=1)
           {
              number=nums[i];
              nums[index]=nums[i];
              index++;
              count++;
           }
            if(number!=nums[i])
           { 
              number=nums[i];
              nums[index]=nums[i];
              index++;
              count=0;
           }
           else{
               count++;
           } 
          
        }
        // cout<<index;
        return index;
    }
};