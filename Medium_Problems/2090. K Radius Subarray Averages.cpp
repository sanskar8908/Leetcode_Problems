#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v(n);
        int i=0;
        int j;
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+nums[i];
           if(i-k>=0 && i+k<=n-1)
           {
               j=i;
               j++;
               while(j<=k*2)
               {
                  sum=sum+nums[j]; 
                  j++;
               }

               v[i]=sum/(k*2+1);
                i++;
               break;
           }
           else{
               v[i]=-1;
           }
        }
        for(int z=i,y=0;z<n;z++,y++,j++)
        {
           if(z-k>=0 && z+k<=n-1)
           {
              sum=sum+nums[j]-nums[y];
              v[z]=sum/(k*2+1);
           }
           else{
               v[z]=-1;
           }
        }
       return v;
    }
};