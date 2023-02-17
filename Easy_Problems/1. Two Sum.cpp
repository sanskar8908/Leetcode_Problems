#include<iostream>
#include<bits/stdc++.h>
#include<vector>


using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v=nums;
        vector<int>ans;
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        int num1,num2;
        while(i<j)
        {
          if(v[i]+v[j]==target)
          {
            num1=v[i]; 
            num2=v[j]; 
            break;
          }
          else if(v[i]+v[j]>target)
          {
            j--;
          }
          else{
              i++;
          }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1 || nums[i]==num2 && count<2)
            {
               ans.push_back(i);
               count++;
               if(count==2)
               {
                 break;
               }
            }
        }
        return ans;
    }
};