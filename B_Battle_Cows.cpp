
#include <bits/stdc++.h>
using namespace std;

int countWins(vector<int>& a, int pos, int x) {
    int n=a.size();
    int wins=0;
    if(pos==0){
        for (int i=1;i<n;i++){
            if(a[i]>x){
                break;
            }

            wins++;
        }
        return wins;
    }
    int mx=a[0];

    for (int i=1;i<pos;i++){
        mx=max(mx,a[i]);
    }

    if (mx>x){
        return 0;
    }
    wins=1;
    for (int i=pos+1;i<n;i++){
        if (a[i] > x) {
            break;
        }

        wins++;
    }

    return wins;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    k--;

    int x=a[k];
    int ans = countWins(a,k,x);
    vector<int> b=a;
    swap(b[0],b[k]);

    ans = max(ans, countWins(b,0,x));
    int pos = -1;

    for (int i=0;i<k;i++){
        if (a[i]>x) {
            pos=i;
            break;
        }
    }

    if (pos!=-1) {
        b=a;
        swap(b[pos], b[k]);

        ans = max(ans, countWins(b, pos, x));
    }

    cout<<ans<<endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
