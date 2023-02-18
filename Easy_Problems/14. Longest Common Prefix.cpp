#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int n=strs.size();
        int min_length=INT_MAX;
        for(int i=0;i<n;i++)
        {
              if(strs[i].length()<min_length)
              {
                 min_length=strs[i].length();
              }         
        }
        int count=0;
        for(int i=0;i<min_length;i++)
        {
            count=0;
            char ch=strs[0].at(i);
            for(int j=0;j<n;j++)
            {
               if(strs[j].at(i)==ch)
               {
                 count++;
               }
               else{
                   break;
               }
            }
            if(count==n){
              ans.append(1,ch);
            }
            else{
              break;
            }
        }
        return ans;
    }
};