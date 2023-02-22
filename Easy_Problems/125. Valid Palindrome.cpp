#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
    int n=s.length();
    string ans;
    for(int i=0;i<n;i++)
    {
        int ascii=int(s.at(i));
        if(ascii>=65 && ascii<=90)
        {
           ans.append(1,char(ascii+32));
        }
        else if((ascii>=97 && ascii<=122)||(ascii>=48 && ascii<=57))
        {
           ans.append(1,s.at(i));
        }
    }
     string rev=ans;
     reverse(rev.begin(),rev.end());
     if(rev==ans)
     {
        return true;
     }
     return false;
 }
};