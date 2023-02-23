#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int count=0;
        int possible=0;
        for(int i=0;i<n;i++)
        {
            
           if(s.at(i)==' ' && possible==1)
           {
              break;
           }
           else if(s.at(i)!=' '){
               possible=1;
               count++;
           }

        }
        return count;
    }
};