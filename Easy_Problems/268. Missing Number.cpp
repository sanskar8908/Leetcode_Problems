#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]!=count)
           {
              break;
           }
           else{
               count++;
           }
        }
        return count;
    }
};