#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string decimalToBinary(int n)
   {
    // Finding the binary form of the number 
    // and converting it to string. 
    string s = bitset<64> (n).to_string();
      
    // Finding the first occurrence of "1"
    // to strip off the leading zeroes.
    const auto loc1 = s.find('1');
      
    if(loc1 != string::npos)
        return s.substr(loc1);
      
    return "0";
    }
public:
    vector<int> evenOddBit(int n) {
        string s=decimalToBinary(n);
        int l=s.size();
        reverse(s.begin(),s.end());
        int even=0,odd=0;
        for(int i=0;i<l;i++)
        {
            if(i%2==0 && s.at(i)=='1')
            {
                even++;
            }
            if(i%2!=0 && s.at(i)=='1')
            {
                odd++;
            }
        }
        vector<int>v(2);
        v[0]=even;
        v[1]=odd;
        return v;
    }
};