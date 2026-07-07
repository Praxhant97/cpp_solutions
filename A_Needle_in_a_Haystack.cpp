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
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n=t.size();
    vector<int> count(26, 0);
    for (char c :t) 
    count[c-'a']++;
    for (char c :s) 
    count[c-'a']--;
    for(int i=0;i<26; i++){
        if(count[i]<0){
            cout<<"Impossible"<<endl;
            return;
        }
    }
    string A="";
    for(int i=0;i<26;i++){
        A.append(count[i],'a'+i);
    }
    int m=s.length();
    vector<char>next(m);
    next[m-1]=s[m-1];
    for(int j=m-2;j>=0;j--){
        if(s[j]!=s[j+1]){
            next[j]=s[j+1];
        }
        else{
            next[j]=next[j+1];
        }
    }
    string res="";
    res.reserve(t.length());
    int i=0, j=0;
    
    while (i<A.length() && j<m){
        if (A[i]<s[j]){
            res += A[i++];
        } else if (A[i] > s[j]){
            res += s[j++];
        } else{
            if (next[j]<s[j]){
                res+=s[j++];
            } else{
                res += A[i++];
            }
        }
    }
    while (i < A.length()) res += A[i++];
    while (j < m) res += s[j++];
    // int count=0;
    // string copy=s;
    // for(int j=0;j<s.size();j++){
    // for(int i=0;i<n;i++){
    //     if(s[i]==t[j]){
    //         count++;
    //         copy.erase(copy.begin()+i);
    //     }
    // }
    // }
    // if(count!=n){
    //     cout<<"Impossible"<<endl;
    //     return;
    // }
    // sort(copy.begin(),copy.end());
    // for(int i=0;i<copy.size();i++){
    //     if(copy[i]==t[0] && copy[i+1]!=t[0]){
    //         for(int j=0;j<n;j++){
    //             copy.push_back(t[j]);
    //         }
    //         break;
    //     }
    // }
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