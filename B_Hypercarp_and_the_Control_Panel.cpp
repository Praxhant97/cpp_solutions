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
        cin>>n;
        int res=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max_subs=0;
    int oglen=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            oglen++;
        }
    }
    int maxi=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
    continue;
        }
        int delta=0;
        if(i>0){
       if(arr[i-1]!=arr[i+1]){
        delta++;
       }
       if(arr[i-1]!=arr[i]){
        delta--;
       }
    }
    if(i+2<n){
       if((arr[i]!=arr[i+2])){
        delta++;
       }
        if(arr[i+1]!=arr[i+2]){
            delta--;
        }
    }
    maxi=max(maxi,delta);
    }
    res=oglen+maxi;
    cout<<res<<endl;
    
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