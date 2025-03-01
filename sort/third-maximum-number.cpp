#include <bits/stdc++.h>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        vector<int>res;

        for (int i:nums){
            s.insert(i);
        }
        for (int i:s){
            res.push_back(i);
        }
        int size = s.size();

        for (int i:res){
            cout<<i<<" ";
        }       
        if (size == 2) return res[1];
        else if (size == 1) return res[0];
         
        return res[size-3];
    }
};