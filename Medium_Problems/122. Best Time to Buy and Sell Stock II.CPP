#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_share=prices[0];
        int ans=0;
        for(int i=0;i<=n-1;i++)
        {
            if(min_share>prices[i])
            {
                min_share=prices[i];
            }
            else{
            if(i==n-1 && min_share<prices[i])
            {
                ans=ans+(prices[i]-min_share);
            }
            else if(min_share<prices[i] && prices[i]>prices[i+1])
            {
                    ans=ans+(prices[i]-min_share);
                    min_share=prices[i];   
            }
            }
            
        }
        return ans;
    }
};