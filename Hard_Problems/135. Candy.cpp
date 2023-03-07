#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size(); 
        vector<int>v(n,1);
        vector<int>v2(n,1);
        if(n==1)
        {
          return 1;
        }
        for(int i=0,j=n-1-i;i<n;i++,j--)
        {
               if(i==0 || i==n-1)
                {
                   if(i==0 && ratings[i]>ratings[i+1])
                   {
                    v[i]=v[i+1]+1;  
                   }
                   else if(i==n-1 && ratings[i]>ratings[i-1]){
                    v[i]=v[i-1]+1;
                   }
                  
                   if(j==n-1 && ratings[j]>ratings[j-1])
                   {
                    v2[j]=v2[j-1]+1; 
                   }
                   else if(j==0 && ratings[j]>ratings[j+1]){
                    v2[j]=v2[j+1]+1;
                   }
                }
           else if(ratings[i]>ratings[i-1] || ratings[j]>ratings[j+1])
            {
                if(ratings[i]>ratings[i-1])
                {
                    v[i]=v[i-1]+1;
                }

                if(ratings[j]>ratings[j+1])
                {
                    v2[j]=v2[j+1]+1;
                }
            }
        }
        int ans=0;
        for(int j=0;j<n;j++)
        {
            cout<<v[j]<<" ";
            cout<<v2[j]<<" "<<endl;
            if(v[j]>v2[j])
            {
              ans=ans+v[j];
            }
            else{
              ans=ans+v2[j];
            }
        }
        return ans;
    }
};