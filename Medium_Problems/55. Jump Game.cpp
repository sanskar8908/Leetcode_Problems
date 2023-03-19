#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
       //using greedy algorithum........
       int n=nums.size();
       int goal=n-1;
       int possible=1;
       for(int i=n-1;i>=0;i--)
       {
         if(nums[i]+i>=goal)
         {
           goal=i; 
             possible=1;
         }
         else{
             possible=0;
         }
       }        
       if(possible==1)
       {
         return true;
       }
       else{
           return false;
       }
    }
};