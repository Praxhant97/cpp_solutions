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
        vector<vector<int>>a;
        for (int j = 0; j < n; j++)
        {
            vector<int> b;
            int a1;
            cin>>a1;
            for (int k = 0; k < a1; k++)
            {
                int a2;
                cin>>a2;
                b.push_back(a2);
            }
            a.push_back(b);
            
        }
        for (int j = 0; j < a.size(); j++)
        {
            sort(a[j].begin(),a[j].end());

        }

        long long int mini=INT_MAX;
        long long int mini1=INT_MAX;
        vector<int> secondmini;

        for (int j = 0; j < a.size(); j++)
        {
            if(a[j][0]<mini) mini=a[j][0];
            secondmini.push_back(a[j][1]);
            if(a[j][1]<mini1) mini1=a[j][1];
        }
        long long int c=0;

        for (int j = 0; j < secondmini.size(); j++)
        {
            c+=secondmini[j];
        }

        cout<<mini+c-mini1<<endl;
        
        
        
        
    }


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}