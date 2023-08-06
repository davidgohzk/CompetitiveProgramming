#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define pi pair<int, int>
#define hs unordered_set
#define hss hs<string>
#define hsi hs<int>
#define msi map<string, int>

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
    int N;
    cin >> N;
    double v, a, x, h1, h2, t, y;
    RG(i, N) {
        cin >> v >> a >> x >> h1 >> h2;
        t = x / (v * cos(a * (M_PI / 180.0)));
        y = v * t * sin(a * (M_PI / 180.0)) - 0.5 * 9.81 * t * t;
        if (h1 + 1 < y && y + 1 < h2) {
            cout << "Safe";
        } else {
            cout << "Not Safe";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.precision(10);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // count << "Case #" << t << ": ";
        solve();
    }
}