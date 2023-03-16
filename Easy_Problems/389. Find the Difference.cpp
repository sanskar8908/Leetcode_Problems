#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<n1;i++)
        {
           m1[s.at(i)]++;
        }
        for(int i=0;i<n2;i++)
        {
           m2[t.at(i)]++;
        }
        char c;
        for(int i=0;i<n2;i++)
        {
            if(m1[t.at(i)]!=m2[t.at(i)])
            {
              c=t.at(i);
              break;
            }
        }
        return c;
    }
};