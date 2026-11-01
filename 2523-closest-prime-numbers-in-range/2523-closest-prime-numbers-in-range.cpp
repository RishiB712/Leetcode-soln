class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
         vector<bool> isPrime(right+1,true);
        if (right >= 0) isPrime[0] = false;
        if (right >= 1) isPrime[1] = false;
        int limit = sqrt(right);
        for (int i = 2; i <= limit; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = left; i <= right; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
        if (primes.size() < 2) {
            return {-1, -1};
        }
        int minDiff = INT_MAX;
        vector<int> ans = {-1, -1};
        for (size_t i = 0; i < primes.size() - 1; ++i) {
            int diff = primes[i + 1] - primes[i];
            if (diff < minDiff) {
                minDiff = diff;
                ans = {primes[i], primes[i + 1]};
                if (minDiff <= 2) {
                    return ans;
                }
            }
        }
        return ans;
    }
};