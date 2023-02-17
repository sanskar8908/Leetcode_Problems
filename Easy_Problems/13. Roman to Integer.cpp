#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
       map<char,int>m;
       m['I']= 1;
       m['V']= 5;
       m['X']= 10;
       m['L']= 50;
       m['C']= 100;
       m['D']= 500;
       m['M']= 1000;
       int num=0;
       int i=0;
       int n=s.length();
       int possible=0;
       for( i=0;i<n-1;)
       {
          if(m[s.at(i)]<m[s.at(i+1)] )
          {
            num=num+m[s.at(i+1)]-m[s.at(i)];
            i=i+2; 
              if(i==n)
              {
                  possible=1;
              }
          }
          else{
          num=num+m[s.at(i)];
       
            i++;
          }
       }
    //    cout<<i;
       if(possible==0)
       {
          num=num+m[s.at(i)];
       }
       return num;
    }
};