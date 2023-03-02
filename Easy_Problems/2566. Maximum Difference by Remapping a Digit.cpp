#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        int n=s.length();
        string s1=s;
         int possible=1;
         char value;
        for(int i=0;i<n;i++)
        {
            if(s.at(i)!='9' && possible==1)
            {
                possible=0;
                value=s.at(i);
                s.at(i)='9';
            }
            if(possible==0 && s.at(i)==value)
            {
                s.at(i)='9';
            }
        }
        int max=stoi(s);
        possible=1;
        for(int i=0;i<n;i++)
        {
            if(s1.at(i)!='0' && possible==1)
            {
                possible=0;
                value=s1.at(i);
                s1.at(i)='0';
            }
            if(possible==0 && s1.at(i)==value)
            {
                s1.at(i)='0';
            }
        }
        int min=stoi(s1);
        return max-min;
    }
};