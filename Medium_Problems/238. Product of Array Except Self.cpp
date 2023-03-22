#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        long int left[n];
        long int right[n];
        left[0]=1;
        for(int i=1;i<n;i++)
        {
          left[i]=left[i-1]*nums[i-1];
        }
        right[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
          right[i]=right[i+1]*nums[i+1];
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            nums[i]=left[i]*right[i];
            // v.push_back(ans);
        }

        return nums;
    }
};