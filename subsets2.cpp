#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void findSubsets(int ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& anslist) {
     
        anslist.push_back(ds);

        for (int i = ind; i < nums.size(); i++) {

            if (i > ind && nums[i] == nums[i-1]) {
                continue;
            }
            
            ds.push_back(nums[i]);
         
            findSubsets(i + 1, nums, ds, anslist);
       
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ansList;
        vector<int> currentSubset;
        findSubsets(0, nums, currentSubset, ansList);

        return ansList;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = solver.subsetsWithDup(nums);

    cout << "Unique Subsets for {1, 2, 2}:" << endl;

    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}