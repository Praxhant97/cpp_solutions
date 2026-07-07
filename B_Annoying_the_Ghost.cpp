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
    cin >> n;
    vector<int> a(n), b(n);
    for (int i=0;i<n;i++) 
    cin>>a[i];
    for (int i=0;i<n;i++) 
    cin>>b[i];
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    for (int i = 0; i < n; i++) {
        if (sorted_a[i] > b[i]) {
            cout<<-1<<endl;
            return;
        }
    }
    vector<bool> used(n,false);
    vector<int> p;
    
    for (int j=0;j<n;j++) {
        for (int i=0; i <n; i++) {
            if (!used[i] && a[i]<=b[j]) {
                used[i]=true;
                p.push_back(i);
                break;
            }
        }
    }
    long long inversions=0;
    for (int i=0;i<n;i++) {
        for (int j =i+1;j<n;j++) {
            if (p[i]>p[j]) {
                inversions++;
            }
        }
    }

    cout << inversions <<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t ;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}