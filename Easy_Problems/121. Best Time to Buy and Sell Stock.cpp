#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min_buy=prices[0];
       int profit=0;
       for(int i=1;i<prices.size();i++)
       {
         if(prices[i]<min_buy)
         {
             min_buy=prices[i];
         }
         if(profit<prices[i]-min_buy)
         {
           profit=prices[i]-min_buy;
         }

       } 
       return profit;
    }
};