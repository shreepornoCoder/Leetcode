class Solution {
    public:
        vector<int> divisors(int n){
            vector<int> res;
            for (int i = 1; i*i<=n; i++){
                if (n % i == 0){
                    res.push_back(i);
                    res.push_back(n/i);
                }
            }
            return res;
        }
        int findGCD(vector<int>& nums) {
            int min_num = *min_element(nums.begin(), nums.end());
            int max_num = *max_element(nums.begin(), nums.end());
            
            int output = 1;
    
            if (min_num == max_num) return max_num;
            else{
                vector<int> max_num_res = divisors(max_num);
                vector<int> min_num_res = divisors(min_num);
    
                int max = 1;
                for (int max_num_element: max_num_res){
                    for (int min_num_element: min_num_res){
                        if (max_num_element == min_num_element){
                            if (max_num_element > max) {
                                max = max_num_element;
                            }
                        }
                    }
                }
                output = max;
            }
            return output;
        }
    };