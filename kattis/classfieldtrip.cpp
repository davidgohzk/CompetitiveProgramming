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
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int ai = 0;
    int bi = 0;

    while (ai < a.size() && bi < b.size()) {
        if (a[ai] < b[bi]) {
            cout << a[ai];
            ++ai;
        }
        if (a[ai] >= b[bi]) {
            cout << b[bi];
            ++bi;
        }
    }
    while (ai < a.size()) {
        cout << a[ai];
        ++ai;
    }
    while (bi < b.size()) {
        cout << b[bi];
        ++bi;
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