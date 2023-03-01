#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(count<=k)
            {
                unsigned int max=*max_element(gifts.begin(),gifts.end());
                auto it=find(gifts.begin(),gifts.end(),max);
                *it=sqrt(max);
                count++;
            }
            else{
                break;
            }
        }
        unsigned long long int sum=0;
        for(int i=0;i<n;i++)
        {
         sum=sum+gifts[i];   
        }
        return sum;
    }
};