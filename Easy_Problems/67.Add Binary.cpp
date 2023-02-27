#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.size();
        int n2=b.size();
        int large_n;
        string B,A;
        if(n1>n2)
        {
          for(int i=0;i<n1-n2;i++)
          {
              B.append(1,'0');
          }
          B.append(b);
          b=B;
        }
        else if(n2>n1)
        {
          for(int i=0;i<n2-n1;i++)
          {
              A.append(1,'0');
          }
          A.append(a);
          a=A;
        }
        int carry=0;
        char sum;
        string ans;
        n1=a.size();
        n2=b.size();
        for(int i=n1-1;i>=0;i--)
        {
           if(a[i]=='0'  &&  b[i]=='0')
           {
              sum='0';
              if(carry==1)
              {
                sum='1';
                carry=0;
              }
               ans.append(1,sum);
           }
           else if((a[i]=='1'  && b[i]=='0') || (a[i]=='0'  && b[i]=='1'))
           {
                sum='1';
              if(carry==1)
              {
                sum='0';
                carry=1; 
                
              }
               ans.append(1,sum);
           }
           else if(a[i]=='1'  && b[i]=='1' && carry==0)
           {
                sum='0';
                carry=1;
                 ans.append(1,sum);
           }
           else if(a[i]=='1'  && b[i]=='1' && carry==1)
           {
                sum='1';
                carry=1;
                ans.append(1,sum);
           }
        }
        if(carry==1)
        {
            ans.append(1,'1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};