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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans(n,'0');
    int valans=INT_MAX;
    for(int i=0;i<=n;i++){
        string t=s;
        string currans(n,'0');
        int currk=k;
        for(int j=0;j<i;j++){
            if(t[j]=='(' && currk>0){
                currans[j]='1';
                t[j]=')';
                currk--;
            }
        }
        for(int j=n-1;j>i;j--){
            if(t[j]==')' && currk>0){
                currans[j]='1';
                t[j]='(';
                currk--;
            }
        }
        int valcur=0;
		int bal=0;
		for(int j=0;j<n;j++){
			if (bal>0 &&t[j]==')'){
				valcur+=2;
				bal--;
			}
			else if(t[j]=='('){
				bal++;
			}
		}
		if(valans>valcur){
			valans=valcur;
			ans=currans;
		}

    }
    cout<<ans<<endl;
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