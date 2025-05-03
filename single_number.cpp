class Solution {
    public:
        int countNum(vector<int> nums, int n, int s){
            int cnt = 0;
            for (int i = 0; i<s; i++){
                if (nums[i] == n){
                    cnt++;
                }
            }
            return cnt;
        }
    
        int singleNumber(vector<int>& nums) {
            int n = nums.size();
    
            if (n == 1) return nums[0];
    
            int res = 0;
            for (int i = 0; i<n; i++){
                res = countNum(nums, nums[i], n);
                if (res == 1) {
                    res = nums[i];
                    break;
                }
            }
    
            return res;
        }
    };

// Time Complexity- O(N^2)