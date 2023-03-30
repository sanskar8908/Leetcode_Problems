#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //sliding window
        int n=cardPoints.size();
        long int sum=0;
        for(int i=0;i<n;i++)
        {
           sum=sum+cardPoints[i];
        }
        int max=0;
        int temp_sum=0;
        int new_k=n-k;
        for(int i=0;i<new_k;i++)
        {
           temp_sum=temp_sum+cardPoints[i]; 
        }
        if((sum-temp_sum)>max)
        {
             max=sum-temp_sum;
        }
        int j=new_k;
        int i=0;
        while(j<n)
        {
           temp_sum=temp_sum+cardPoints[j]-cardPoints[i];
           i++;
            j++;
           if((sum-temp_sum)>max)
           {
              max=sum-temp_sum;
           }         
        }
        return max;      
    }
};