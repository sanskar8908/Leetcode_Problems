#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lMax(height.size());
        vector<int> rMax(height.size());
        // max left as minimum integer
        int mL = INT_MIN;
        // finding left max array
        for(int i = 0;i<lMax.size();i++){
            mL=max(height[i], mL);
            lMax[i] = mL;
        }
        mL = INT_MIN;
        // finding right max array
        for(int i = lMax.size()-1;i>-1;i--){
            mL=max(height[i], mL);
            rMax[i] = mL;
        }
        int ans = 0;
        // finding the result
        for(int i = 0;i<height.size();i++){
            ans += min(lMax[i],rMax[i])-height[i];
        }
        return ans;
    }
};