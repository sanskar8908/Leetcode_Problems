#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum1=0;
        int rem;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            while(nums[i]!=0)
            {
              rem=nums[i]%10;
                 sum1=sum1+rem;
                nums[i]=nums[i]/10;
            }
           
        }
        
        return abs(sum-sum1);
    }
};