#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            string s=to_string(nums[i]);
            int l=s.length();
            int j=0;
            while(j<l)
            {
                int num=(int(s.at(j)))-48;
                ans.push_back(num);
                j++;
            }
        }
        return ans;
    }
};