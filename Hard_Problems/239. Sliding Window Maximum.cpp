#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     vector<int>res;
     deque<int>q;
     for(int i=0;i<nums.size();i++)
     {
          if(!q.empty() && q.front()<=(i-k))//to maintain window of size k
          {
             q.pop_front();
          }
          while(!q.empty() && nums[q.back()]<nums[i])
          {
              q.pop_back();
          }
          q.push_back(i);
          if(i>=(k-1))
          {
             res.push_back(nums[q.front()]);
          }
     }   
     return res;
    }
};