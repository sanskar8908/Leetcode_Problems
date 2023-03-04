#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        while(num!=0)
        {
            v.push_back(num%10);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int n=v.size();
        int num1=-1,num2=-1;
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(num1==-1)
                {
                    num1=v[i];
                }
                else{
                num1=num1*10;
                num1=num1+v[i];
                }
            }
            else
            {
                if(num2==-1)
                {
                    num2=v[i];
                }
                else{
                num2=num2*10;
                num2=num2+v[i];
                }
            }
        }
        return num1+num2;
    }
};