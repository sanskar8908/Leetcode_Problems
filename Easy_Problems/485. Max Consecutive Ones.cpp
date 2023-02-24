#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]==1)
           {
             count++;
            //  cout<<"called 1"<<endl;
              if(max<count)
               {
                 max=count;
               }
           }
           else{
               if(max<count)
               {
                 max=count;
               }
               count=0;
            //  cout<<"called 2"<<endl;
           }
        }
        return max;
    }
};