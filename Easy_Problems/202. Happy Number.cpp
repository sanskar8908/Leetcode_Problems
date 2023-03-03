#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
           string s=to_string(n);
        while(s.size()>1)
        {
           s=to_string(n);
           int num=0;
           for(int i=0;i<s.size();i++)
           {
             num=num+pow(int(s.at(i))-48,2);
           }
           s=to_string(num);
           n=num;
        }
        if(s=="1" || s=="7")
           {
              return true;
           }
        return false;
    }
};  