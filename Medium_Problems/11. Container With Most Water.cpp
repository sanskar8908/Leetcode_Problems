#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        long int max_amount=0;
        for(int i=0,j=height.size()-1;i<j;)
        {
          if(height[i]<height[j])
          {
              long int width=j-i;
            long int temp_amount=width*height[i];
            if(temp_amount>max_amount)
            {
               max_amount=temp_amount;
            }
              i++;
          }
          else
          {
             long int width=j-i;
            long int temp_amount=width*height[j];
             if(temp_amount>max_amount)
            {
               max_amount=temp_amount;
            }
              j--;
          }
        }
         return max_amount;
    }
};