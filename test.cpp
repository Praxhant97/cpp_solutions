#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sort to handle duplicates easily
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(nums, 0, subset, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, int start, vector<int>& subset, vector<vector<int>>& result) {
        result.push_back(subset); // add current subset

        for (int i = start; i < nums.size(); ++i) {
            // skip duplicates
            if (i > start && nums[i] == nums[i - 1]) continue;

            subset.push_back(nums[i]);
            backtrack(nums, i + 1, subset, result);
            subset.pop_back(); // backtrack
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> res = sol.subsetsWithDup(nums);

    cout << "[";
    for (auto& v : res) {
        cout << "[";
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i];
            if (i < v.size() - 1) cout << ",";
        }
        cout << "]";
    }
    cout << "]" << endl;

    return 0;
}
