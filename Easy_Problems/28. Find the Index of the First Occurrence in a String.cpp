#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        if(haystack.find(needle)==18446744073709551615)
        {
           return -1;
        }
        else
        {
           ans=haystack.find(needle);
        }
        return ans;
    }
};