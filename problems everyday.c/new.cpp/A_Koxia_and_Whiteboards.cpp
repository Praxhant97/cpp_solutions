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

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        long long sum = 0;
        deque<int>Klwb;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            Klwb.push_back(x);
            sum+=x;
        }
        sort(Klwb.begin(), Klwb.end());
        for(int i=0; i<m; i++)
        {
            int y;
            cin>>y;
            sum-=Klwb.front();
            sum+=y;
            Klwb.pop_front();
            Klwb.push_back(y);
            sort(Klwb.begin(), Klwb.end());
        }

        cout<<sum<<"\n";
    }
    return 0;
}