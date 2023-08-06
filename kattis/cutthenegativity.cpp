#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define pi pair<int, int>
#define hs unordered_set
#define hss hs<string>
#define hsi hs<int>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define RG(i, b) for (int i = 0; i < b; ++i)

#define SQ(a) (a) * (a)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool checkFP(float a, float b) {
    return abs(a - b) < INF;
}

void solve() {
    int a;
    cin >> a;
    vector<tuple<int, int, int>> el;
    int x;
    REP(i, 1, a) {
        REP(j, 1, a) {
            cin >> x;
            if (x != -1) {
                el.push_back(make_tuple(i, j, x));
            }
        }
    }
    sort(el.begin(), el.end(), [](const tuple<int, int, int> &a, const tuple<int, int, int> &b) {
        if (get<0>(a) == get<0>(b)) {
            return get<1>(a) < get<1>(b);
        }
        return get<0>(a) < get<0>(b);
    });
    REP(i, 0, el.size() - 1) {
        cout << get<0>(el[i]) << " " << get<1>(el[i]) << " " << get<2>(el[i]) << "\n";
    }
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