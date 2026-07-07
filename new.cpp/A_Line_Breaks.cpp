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

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n, m;
        cin >> n >> m; 

        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        int current_length = 0; 
        int count = 0;          
        for (int i = 0; i < n; i++) {
            int word_length = words[i].length();
            if (current_length + word_length > m) {
                break; 
            }
            current_length += word_length;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
