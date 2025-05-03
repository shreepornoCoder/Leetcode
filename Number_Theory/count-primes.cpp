class Solution {
    public:
        int sieve(int n){
            int arr[n]; for (int i = 0; i<n; i++) arr[i]=1;
            int cnt = 0;
            for (int i = 2; i*i<=n; i++){
                if (arr[i] == 1){
                    for (int j = i*i; j<n; j+=i){
                        arr[j] = 0;
                    }
                }
            }
            for (int i = 2; i<n; i++){
                if (arr[i] == 1) cnt++;
            }
            return cnt;
        }
        int countPrimes(int n) {
            if (n <= 1) return 0;
            int res = sieve(n);
    
            return res;
        }
    };