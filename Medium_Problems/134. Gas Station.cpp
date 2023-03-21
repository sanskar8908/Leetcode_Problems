#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //using greedy algorithum
        int n=gas.size();
        vector<int>aux(n);
        long int sum_gas=0;       
        long int sum_cost=0;       
        for(int i=0;i<n;i++)
        {
            sum_gas=sum_gas+gas[i];
            sum_cost=sum_cost+cost[i];
           aux[i]=gas[i]-cost[i];
        }
        int ans_index;
        if(sum_cost>sum_gas)
        {
           return -1;
        }
        else{
        for(int i=0;i<n;i++)
        {
            int j=i;
            int cummulative=aux[j++];
          while(cummulative>0 && j<n)
          {
            cummulative=cummulative+aux[j];
            j++;
          }
          if(j==n)
          {
           ans_index=i;
          break;
          }
        }
        }
        return ans_index;
    }
};