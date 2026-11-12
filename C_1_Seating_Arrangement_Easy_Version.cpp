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
    int t,s;
    cin>>t>>s;
    string str;
    cin>>str;
    vector<int>dp(n,0);

    vector<int>tab(t,0);
    int Ambi=0;
    vector<int> ambiTable;
   for (int i = 0; i < n; i++) {
        bool seated = false;

        if (str[i] == 'I') {
            for (int j = 0; j < t; j++) {
                if (tab[j] == 0) {
                    tab[j]++;
                    seated = true;
                    break;
                }
            }
        }

        else if (str[i] == 'A') {
            for (int j = 0; j < t; j++) {
                if (tab[j] > 0 && tab[j] < s) {
                    tab[j]++;
                    ambiTable.push_back(j);
                    seated = true;
                    break;
                }
            }
            if (!seated) {
                for (int j = 0; j < t; j++) {
                    if (tab[j] == 0) {
                        tab[j]++;
                        seated = true;
                        break;
                    }
                }
            }
        }

        else if (str[i] == 'E') {
            for (int j = 0; j < t; j++) {
                if (tab[j] > 0 && tab[j] < s) {
                    tab[j]++;
                    seated = true;
                    break;
                }
            }

            if (!seated && !ambiTable.empty()) {
                int mt = -1;

                for (int j = 0; j < t; j++) {
                    if (tab[j] == 0) {
                        mt = j;
                        break;
                    }
                }

                if (mt != -1) {
                    int old = ambiTable.back();
                    ambiTable.pop_back();

                    // Reassign the ambivert to an empty table.
                    tab[old]--;

                    tab[mt]++;

                    // Seat the current extrovert at the old table.
                    tab[old]++;

                    seated = true;
                }
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < t; i++) {
        ans += tab[i];
    }

    cout << ans <<endl;















    // for(int i=0;i<n;i++){
    //     char x=str[i];
    //     int it=0;
    //     for(int j=it;j<tab.size()-1 || (tab[i]==0);j++){
    //         if(str[i]=='I'){
    //             if(tab[j]==0){
    //                 tab[j]++;
    //                 break;
    //             }
    //         }
    //         if(str[i]=='E'){
    //             if(tab[j]>0 && tab[j]<s){
    //                 tab[j]++;
    //                 break;
    //             }
    //         }
    //         if(str[i]=='A'){
    //             if(i<n-1){
    //                 if(str[i+1]=='I'){
    //                     if(tab[j]>0 && tab[j]<s){
    //                         tab[it]++;
    //                         break;
    //                     }
    //                     else if(tab[j]==0){
    //                         tab[j]++;
    //                         break;
    //                     }
    //                 }
    //                 if(str[i+1]=='E'){

    //                 }
    //             }
    //         }
    //     }

    // }
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