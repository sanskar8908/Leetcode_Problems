#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
        {
           m[s.at(i)]++;
        }
        for(int i=0;i<n;i++)
        {
           if(m[s.at(i)]==1)
           {
              return i;
           }
        }
        return -1;
    }
};