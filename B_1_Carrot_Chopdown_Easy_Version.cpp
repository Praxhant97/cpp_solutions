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

    // void solve() {
    //     int n,m;
    //     cin>>n>>m;
    //     int maxi=0;
    //     vector<int>arr(n);
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //         if(arr[i]==2){
    //             maxi++;
    //         }
    //         maxi++;
    //     }
    //     for(int i=1;i<=m;i++){
    //         int x=i;
    //         int lmaxi=0;
    //         vector<int>a=arr;
    //         for(int j=0;j<n;j++){
    //             if(a[j]>x){
    //                 a[j]-=x;
    //                 a.push_back(x);
    //             }
    //         }
    //         sort(a.begin(),a.end());
    //         int count=1;
    //         for(int k=0;k<a.size()-1;k++){
    //             if(a[k]==a[k+1]){
    //                 count++;
    //             }
    //             if(a[k]!=a[k+1]){
    //                 count=1;
    //             }
    //             lmaxi=max(lmaxi,count);
    //         }
    //         maxi=max(maxi,lmaxi);
    //     }
    //     cout<<maxi<<endl;
    // }
    void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> freq(m+1,0);
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        freq[a]++;
    }
    int max1=0,max2=0;
    for (int x=1;x<=m;x++) {
        if (freq[x]>max1) {
            max2=max1;
            max1=freq[x];
        } else if(freq[x]>max2) {
            max2=freq[x];
        }
    }
    int ans = max1 +max2;
    vector<int> suf(m + 2, 0);
    for (int x = m; x >= 1; x--) {
        suf[x] = suf[x + 1] + freq[x];
    }
    for (int x = 1; x <= m; x++) {
        int count = freq[x] + suf[x + 1];
        if (2 * x <= m) {
            count += freq[2 * x];
        }
        ans = max(ans, count);
    }

    cout << ans <<endl;
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