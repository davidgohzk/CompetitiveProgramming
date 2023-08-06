#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define pi pair<int, int>
#define hs unordered_set
#define hss hs<string>
#define hsi hs<int>
#define msi map<string, i>

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

int sumDigit(int a) {
    int r;
    for (r = 0; a > 0; r += a % 10, a = a / 10) {
    }

    return r;
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    REP(i, a, b) {
        if (sumDigit(i) == c) {
            cout << i << "\n";
            break;
        }
    }
    for (int i = b; i >= a; --i) {
        if (sumDigit(i) == c) {
            cout << i << "\n";
            break;
        }
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