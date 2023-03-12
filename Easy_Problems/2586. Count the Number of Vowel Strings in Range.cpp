#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
            cout<<i<<" ";
            int n=words[i].size();
            if((words[i].at(0)=='a'||words[i].at(0)=='e'||words[i].at(0)=='i'||words[i].at(0)=='o'||words[i].at(0)=='u') && (words[i].at(n-1)=='a'||words[i].at(n-1)=='e'||words[i].at(n-1)=='i'||words[i].at(n-1)=='o'||words[i].at(n-1)=='u') )
            {
                count++;
            }
        }
        return count;
    }
};