#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        long long int i=1;
        long long int ans=0;
        int possible=1;
        while(possible==1)
        {
            long long int calc=i*i;
        //    ans=i*i
           if(calc<=x)
           {
              ans=i;
              possible=1;
           }
           else{
               possible=0;
           }
            i++;
        }
        return ans;
    }
};