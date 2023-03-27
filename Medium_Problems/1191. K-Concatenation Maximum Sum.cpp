#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kadanes(vector<int>& nums)
    {
        int n=nums.size();
        long long int max=INT_MIN;
        long long int cum_sum=0;
        for(int i=0;i<n;i++)
        {
          cum_sum=cum_sum+nums[i];
          if(cum_sum>max)
          {
            max=cum_sum;
          }
          if(cum_sum<0)
          {
             cum_sum=0;
          }
        }
        if(max<0)
        {
          max=0;
        }
        return max;
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {
      int n=arr.size();
      //merging two array
      vector<int>v=arr;
      for(int i=0;i<n;i++)
      {
          v.push_back(arr[i]);
      }  
      int n1=v.size();
      long long int sum=0;
      //finding the sum of single array
      for(int i=0;i<n;i++)
      {
        sum=sum+arr[i];
      }
      long long int ans;
      if(k==1)
      {
       ans=kadanes(arr)%(1000000000+7);
      }
      else if(sum<0)
      {
       ans=kadanes(v)%(1000000000+7);
      }
      else{
       ans=(kadanes(v)+(k-2)*sum)%(1000000000+7);
    
      }
      return ans;
    }
};