#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
           if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='I'||s.at(i)=='O'||s.at(i)=='U')
           {
              v.push_back(s.at(i));
           }
        }
        int index=0;
        for(int i=0;i<n;i++)
        {
           if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='I'||s.at(i)=='O'||s.at(i)=='U')
           {
              s.at(i)=v[index];
              index++;
           }
        }
        return s;
    }
};