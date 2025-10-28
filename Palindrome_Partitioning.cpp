#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

const int MOD = 1e9 + 7;
const int INF = 1e9;

class Solution {
private:
    bool checkpalindrome(string s, int left, int right) {
        if (left >= right) return true;
        if (s[left] != s[right]) return false;
        return checkpalindrome(s, left + 1, right - 1);
    }

    void divide(string &s, int start, vector<string> &current, vector<vector<string>> &result) {
        if (start == s.size()) {
            result.push_back(current);
            return;
        }
        for (int end = start; end < s.size(); end++) {
            if (checkpalindrome(s, start, end)) {
                current.push_back(s.substr(start, end - start + 1));
                divide(s, end + 1, current, result);
                current.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        divide(s, 0, current, result);
        return result;
    }
};

void solve() {
    string s;
    cin >> s;

    Solution sol;
    vector<vector<string>> ans = sol.partition(s);

    // Print results
    for (auto &partition : ans) {
        for (auto &str : partition) {
            cout << str << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}
