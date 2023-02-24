#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double avg;
        for(int i=0;i<k;i++)
        {
           sum=sum+nums[i];
        }
        double max_avg;
        avg=sum/k;
        max_avg=avg;
        for(int i=k,j=0;i<n;i++,j++)
        {
           sum=sum+nums[i]-nums[j];
           avg=sum/k;
           if(avg>max_avg)
           {
              max_avg=avg;
           }
        }
        return max_avg;
    }
};