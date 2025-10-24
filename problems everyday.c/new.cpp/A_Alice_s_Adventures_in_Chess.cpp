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

bool RedQueenyes(int n, int x, int y, const string& moves) {
    auto makeMove = [](int x, int y, char move) {
        if (move == 'N') return make_pair(x, y + 1);
        if (move == 'S') return make_pair(x, y - 1);
        if (move == 'E') return make_pair(x + 1, y);
        if (move == 'W') return make_pair(x - 1, y);
        return make_pair(x, y);
    };

    int curr_x = 0, curr_y = 0;
    vector<pair<int, int>> positions = {{0, 0}};

    for (char move : moves) {
        tie(curr_x, curr_y) = makeMove(curr_x, curr_y, move);
        positions.push_back({curr_x, curr_y});

        if (curr_x == x && curr_y == y) {
            return true;
        }
    }

    int dx = curr_x;
    int dy = curr_y;
    if (dx == 0 && dy == 0) {
        for (auto& pos : positions) {
            if (pos.first == x && pos.second == y) {
                return true;
            }
        }
        return false;
    }

    for (auto& pos : positions) {
        int startx = pos.first;
        int starty = pos.second;

        int relx = x - startx;
        int rely = y - starty;

        if (dx == 0) {
            if (relx != 0) continue;
            if (dy != 0 && rely % dy == 0 && rely / dy >= 0) {
                return true;
            }
            continue;
        }

        if (dy == 0) {
            if (rely != 0) continue;
            if (dx != 0 && relx % dx == 0 && relx / dx >= 0) {
                return true;
            }
            continue;
        }

        if (relx % dx == 0 && rely % dy == 0) {
            int t1 = relx / dx;
            int t2 = rely / dy;
            if (t1 == t2 && t1 >= 0) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string moves;
        cin >> moves;

        bool result = RedQueenyes(n, x, y, moves);
        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
