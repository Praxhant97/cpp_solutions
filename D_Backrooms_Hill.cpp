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
// bool isahill(int n,vector<int> arr){

// }

// void solve() {
//     int n;
//     cin>>n;
//     vector<int>a;
//     vector<int>b;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         if(i%2==0){
//             a.push_back(x);

//         }else{
//             b.push_back(x);
//         }
//     }
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     vector<int>ans;
//     for(int i=0;i<min(a.size(),b.size());i++){
//         ans.push_back(a[i]);
//         ans.push_back(b[i]);
//     }
//     if(a.size()>b.size()){
//         ans.push_back(a.back());
//     }else if(a.size()<b.size()){
//         ans.push_back(b.back());
//     }
//     vector<int>brr=ans;
//     sort(brr.begin(),brr.end());
//     if(brr==ans){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
// }
void solve(){ //correct ans
    int n;
	cin >> n;
	
	vector<int>a(n+1);
	vector<int> pos(n+1);
	
	for(int i=1;i<=n;i ++)
	{
		cin>>a[i];
		pos[a[i]]=i% 2;
	}
	int balance = 0;
	
	for(int x = n; x > 0; x --)
	{
		if(pos[x]%2==0) 
        balance ++;
		if(pos[x]%2==1) 
        balance --;
		
		if(abs(balance)>1)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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