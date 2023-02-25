#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distinctIntegers(int n) {
        set<int>s;
        
        int count=1;
        s.insert(n);

        while(n>=2)
        {
           for(int i=2;i<n;i++)
            {
                if(n%i==1)
                {
                    count++;
                    s.insert(i);
                }
            }
            n=n-1;
        }
    
        return s.size();
    }
};