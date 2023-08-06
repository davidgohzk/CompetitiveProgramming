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
    // code
    int N, Q;
    cin >> N >> Q;
    int l[N];
    RG(i, N) {
        cin >> l[i];
    }
    int a, b, c;
    RG(i, Q) {
        cin >> a >> b >> c;
        if (a == 1) {
            l[b - 1] = c;
        } else {
            cout << abs(l[b - 1] - l[c - 1]) << "\n";
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