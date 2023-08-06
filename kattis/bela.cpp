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
    char d;
    cin >> d;
    map<char, pi> m;
    m['A'] = MP(11, 11);
    m['K'] = MP(4, 4);
    m['Q'] = MP(3, 3);
    m['J'] = MP(20, 2);
    m['T'] = MP(10, 10);
    m['9'] = MP(14, 0);
    m['8'] = MP(0, 0);
    m['7'] = MP(0, 0);

    char n, s;
    int sum = 0;
    int t;
    RG(i, a) {
        RG(i, 4) {
            cin >> n >> s;
            sum += (s == d) ? m[n].F : m[n].S;
        }
    }
    cout << sum;
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