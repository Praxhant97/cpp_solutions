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
    string s;
    string t;
    cin>>s;
    // string b;
    cin>>t;
    string r1="";
    string r2="";
    if(s[0]==')' || s[n-1]=='(' || t[0]==')' || t[n-1]=='('){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> arr;
    bool bj=1;
    for(int i=0;i<n;i++){
        if(s[i]==t[i]){
            r1+=s[i];
            r2+=t[i];
        }
			else{
				if(bj==1){
                r1+='(';
                r2+=')';
                }
				else{
                r1+=')';
                r2+='(';
                }
				bj^=1;
			}
    }
    int t1 = 0, t2 = 0;
		bj = 1;
		for (int i=0;i<n;i++) {
			if(r1[i]=='('){
            t1++; 
            }
            else{
            t1--;
            }
			if(r2[i]=='('){
            t2++; 
            }
            else {
            t2--;
            }
			if (t1<0||t2<0)bj=0;
		}
		if(t1!=0||t2!=0){
        bj=0;
        }
		if(bj){
            cout<<"YES"<<endl;
        }
		else 
        cout<<"NO"<<endl;
    // if(sum1+sum2==0){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // cout<<"NO"<<endl;

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