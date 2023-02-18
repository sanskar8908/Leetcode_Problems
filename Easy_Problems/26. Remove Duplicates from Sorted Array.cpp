#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
      int count=0;
      int compare=200;
      for(int i=0;i<n;i++)
      {
         if(compare!=nums[i])
         {
           nums[count]=nums[i];
           count++;
           compare=nums[i];
         }
      }  
      return count;
    }
};