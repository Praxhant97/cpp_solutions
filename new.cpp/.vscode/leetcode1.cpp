#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long lcm(long long a, long long b) {
        return (a / std::gcd(a, b)) * b;
    }

    long long lcmArray(const std::vector<int>& nums) {
        if (nums.empty()) return 1; 
        long long result = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            result = lcm(result, nums[i]);
        }
        return result;
    }

    long long maxScore(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return static_cast<long long>(nums[0]) * nums[0];
        }

        int fullGCD = nums[0];
        long long fullLCM = lcmArray(nums);
        for (int i = 1; i < n; ++i) {
            fullGCD = std::gcd(fullGCD, nums[i]);
        }

        long long maxFactorScore = static_cast<long long>(fullGCD) * fullLCM;
        for (int i = 0; i < n; ++i) {
            int currentGCD = 0;
            vector<int> remainingElements;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    remainingElements.push_back(nums[j]);
                    currentGCD = currentGCD == 0 ? nums[j] : std::gcd(currentGCD, nums[j]);
                }
            }
            long long currentLCM = lcmArray(remainingElements);
            long long factorScore = static_cast<long long>(currentGCD) * currentLCM;
            maxFactorScore = std::max(maxFactorScore, factorScore);
        }
        return maxFactorScore;
    }
};
