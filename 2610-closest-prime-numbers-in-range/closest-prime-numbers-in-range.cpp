class Solution {
public:
    vector<bool> prime(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> p = prime(right);
        vector<int> primesList;
        for (int i = left; i <= right; i++) {
            if (p[i]) primesList.push_back(i);
        }
        if(primesList.size()<=1)return {-1,-1};
        vector<int> ans = {-1, -1};
        int diff = INT_MAX;

        for (int i = 0; i + 1 < primesList.size(); i++) {
            int d = primesList[i + 1] - primesList[i];
            if (d < diff || (d == diff && primesList[i] < ans[0])) {
                diff = d;
                ans = {primesList[i], primesList[i + 1]};
            }
        }

        return ans;
    }
};
