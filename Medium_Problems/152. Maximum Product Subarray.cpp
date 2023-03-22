#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
       int cum_product=1;
       int max_product=INT_MIN;
       for(int i=0;i<n;i++)
       {
           if(nums[i]>max_product)
           {
              max_product=nums[i];
           }
           cum_product=cum_product*nums[i];
           if(cum_product>max_product)
           {
               max_product=cum_product;
           }
           if(cum_product==0)
           {
              cum_product=1;
           }
       }
       cum_product=1;
       for(int i=n-1;i>=0;i--)
       {
          if(nums[i]>max_product)
           {
              max_product=nums[i];
           }
           cum_product=cum_product*nums[i];
           if(cum_product>max_product)
           {
               max_product=cum_product;
           }
           if(cum_product==0)
           {
              cum_product=1;
           }
       }
       return max_product;
    }
};