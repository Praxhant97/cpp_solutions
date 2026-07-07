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
//     int arr[n];
//     vector<int>odd;
//     vector<int>even;
//     vector<int>rem(m);
//     int totalsum=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(i%2==0){
//             odd.push_back(arr[i]);
//         }
//         else{
//             even.push_back(arr[i]);
//         }
//         totalsum+=arr[i];

//     }
    
//   int odd_count=0 ,even_count=0;
//     for(int i=0;i<m;i++){
//         cin>>rem[i];
//         if(rem[i]%2==0){
//             even_count++;

//         }
//         else{
//             odd_count++;
//         }

//     }



//     sort(odd.rbegin(),odd.rend());
//      sort(even.rbegin(),even.rend());
//     //  cout<<odd_count<<" "<<even_count<<endl;
//     // cout<<"odd: ";
//     // for(auto x : odd){
//     //     cout<<x<<" ";
//     // }
//     // cout<<endl;   
//     // cout<<"even: ";
//     // for(auto x : even){
//     //     cout<<x<<" ";
//     // }
//     // cout<<endl;    
//     if (odd_count>0&&odd.size()>0){
//         totalsum-=odd[0];
//         // odd_count--;
//         for (int i=1;i<odd_count&&i<odd.size();i++){
//             if(odd[i]<0){
//                 break; // Stop marking if numbers are negative
//             }
//             else{
//                 totalsum-=odd[i];
//             }
//         }
//     }
    
//     if (even_count>0&& even.size()>0){
//         totalsum-=even[0];
        
//         for (int i=1;i<even_count&&i<even.size();i++){
            
//             if(even[i]<0){
//                 // totalsum-=even[0];
//                 break;
//             }
//             else{
//                 totalsum-=even[i];
//             }
//         }
//     }
//     cout<<totalsum<<endl;


// }
void solve (){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> odd;
    vector<int> even;
    long long totalsum=0;
    vector<int>rem(m);
    for(int i=0;i<n;i++){
        if(i%2==0){
            odd.push_back(arr[i]);
        }
        else{
            even.push_back(arr[i]);
        }
        totalsum+=arr[i];
    }
    int odd_count=0;
    int even_count=0;
    for(int i=0;i<m;i++){
        cin>>rem[i];
        if(rem[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }


    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());


    if(odd_count>0 && odd.size()>0){
        totalsum-=odd[0];
        for(int i=1;i<odd_count && i<odd.size();i++){
        if(odd[i]<0){
            break;
        }
        else{
            totalsum-=odd[i];
        }
    }
    }
        if(even_count>0 && even.size()>0){
        totalsum-=even[0];
        for(int i=1;i<even_count && i<even.size();i++){
        if(even[i]<0){
            break;
        }
        else{
            totalsum-=even[i];
        }
    }
    }
    cout<<totalsum<<endl;
    


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