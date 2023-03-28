#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //using floating window approach
        int n=arr.size();  
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++)
        {
           sum=sum+arr[i];
        }
        int avg;
        avg=sum/k;
        if(avg>=threshold)
        {
          count++;
        }
        for(int i=k,j=0;i<n;i++,j++)
        {
           sum=sum+arr[i]-arr[j];
           avg=sum/k;
         if(avg>=threshold)
         {
           count++;
         }
        }
        return count;
        
    }
};