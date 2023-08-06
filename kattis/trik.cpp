#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define pi pair<int, int>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i, a, b) for (int i = a; i <= b; i++)

#define SQ(a) (a) * (a)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool checkFP(float a, float b) {
    return abs(a - b) < INF;
}

void solve() {
    string a;
    getline(cin, a);
    int pos = 1;
    for (char c : a) {
        if (pos == 1) {
            if (c == 'A') {
                pos = 2;
            } else if (c == 'C') {
                pos = 3;
            }
        } else if (pos == 2) {
            if (c == 'A') {
                --pos;
            } else if (c == 'B') {
                ++pos;
            }
        } else if (pos == 3) {
            if (c == 'B') {
                --pos;
            } else if (c == 'C') {
                --pos;
                --pos;
            }
        }
    }
    cout << pos;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // count << "Case #" << t << ": ";
        solve();
    }
}