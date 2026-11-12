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

void solve() {
    int n;
    string s;
    cin>>s;
    vector<int>arr;
    int sum=0;
    int cnt2=0;
    int cnt3=0;
    
        for (int i=0;i<s.size();i++) {
        int digit = s[i] - '0';
        sum += digit;

        if(digit==2) {
            cnt2++;
        }

        if(digit==3) {
            cnt3++;
        }
    }

    for (int i=0;i<=cnt2;i++) {
        for (int j=0;j<=cnt3;j++) {
            if ((sum+2*i+6*j)%9==0) {
                cout << "YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}