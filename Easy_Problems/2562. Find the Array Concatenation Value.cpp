#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        long long int con=0;
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
            if(i==j)
            {
                string s=to_string(nums[i]);
                int no;
                no=stoi(s);
                con=con+no;
            }
            else{
                string s1=to_string(nums[i]);
                string s2=to_string(nums[j]);
                s1.append(s2);
                int no;
                no=stoi(s1);
                con=con+no;
            }
            
        }
        return con;
    }
};