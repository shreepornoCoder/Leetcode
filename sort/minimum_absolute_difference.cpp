#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int min_diff = INT_MAX;

        vector<vector<int>> res;

        for (int i = 0; i<n-1; i++){
            int diff = arr[i+1]-arr[i];
            if (diff < min_diff) min_diff = diff;
        }
        for (int i = 0; i<n-1; i++){
            int diff = arr[i+1]-arr[i];
            if (diff == min_diff){
                res.push_back({arr[i], arr[i+1]});
            }
        }

        return res;
    }
};