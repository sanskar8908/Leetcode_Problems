#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int n1=ransomNote.size();
       int n2=magazine.size();
       unordered_map<char,int>m1;
       unordered_map<char,int>m2;
       for(int i=0;i<n1;i++)
       {
         m1[ransomNote.at(i)]++;
       }
       for(int i=0;i<n2;i++)
       {
         m2[magazine.at(i)]++;
       }
       for(int i=0;i<n1;i++)
       {
         if(m1[ransomNote.at(i)]>m2[ransomNote.at(i)])
         {
             return false;
         }

       }
       return true;
    }
};