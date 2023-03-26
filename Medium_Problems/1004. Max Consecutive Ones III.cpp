#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //using variable sliding window 
        int n=nums.size();
        int temp_k=0;
        int size=0;
        int max=0;
        for(int i=0,j=0;j<n;j++)
        {
            if(nums[j]==1 || temp_k<k)
            {
                if(nums[j]==1)
                {
                 size++;
                }
                else{
                  temp_k++;
                  size++;
                }
            }
            else{
                while(nums[i]==1 && i<j)
                {
                  size--;
                  i++;
                }
                size--;
                temp_k--;
                i++;
                j--;
            }
            if(size>max)
            {
               max=size;
            }
        }
        return max;
    }
};