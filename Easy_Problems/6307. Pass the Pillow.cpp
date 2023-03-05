#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int passThePillow(int n, int time) {
        int index;
        int count=1;
        int possible=1;
        while(time!=0)
        {
            if(possible==1 && time!=0)
            {
                time--;
                count++;
                index=count;
                if(count==n)
                {
                    possible=2;
                }
            }
            if(possible==2 && time!=0)
            {
                time--;
                count--;
                index=count;
                if(count==1)
                {
                    possible=1;
                }
            }
        }
        return index;
    }
};