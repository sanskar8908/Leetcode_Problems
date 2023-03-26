#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        unordered_map<int,int>m;
        int one=1;
        int zero=0;
        int none=-1;
        m[one]=numOnes;
        m[zero]=numZeros;
        m[none]=numNegOnes;
        vector<int>v;
        while(m[one]!=0)
        {
            v.push_back(1);
            m[one]--;
        }
         while(m[zero]!=0)
        {
            v.push_back(0);
            m[zero]--;
        } 
        while(m[none]!=0)
        {
            v.push_back(-1);
            m[none]--;
        }
        sort(v.begin(),v.end());
        int i=v.size()-1;
        int sum=0;
        while(k--)
        {
            sum=sum+v[i];
            i--;
        }
        return sum;
    }
};