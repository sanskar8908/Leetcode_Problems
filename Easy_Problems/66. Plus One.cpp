#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=0;
        int i=n-1;
        do{
           int number=digits[i];
           if(number==9)
           {
              carry=1;
              digits[i]=0;
              i--;
           }
           else{
               digits[i]++;
               carry=0;
           }
        }while(carry==1 && i>=0);

        if(carry==1 && digits[0]==0)
        {
            digits.push_back(0);
            n=digits.size();
            digits[0]=1;
        }
        return digits;
    }
};