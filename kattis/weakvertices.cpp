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

void solve() {
    int a = 0;
    while (a != -1) {
        cin >> a;
        int arr[a][a];
        int s[a];
        RG(i, a) {
            s[i] = 0;
        }
        int b;
        RG(i, a) {
            RG(j, a) {
                cin >> b;
                arr[i][j] = b;
            }
        }
        for (int i = 0; i < a; i++) {
            int pass = 0;
            if (s[i] != 0) continue;
            for (int j = 0; j < a; j++) {
                if (arr[i][j] == 0) continue;
                for (int k = 0; k < a; k++) {
                    if (arr[j][k] == 0) continue;
                    if (arr[k][i] == 1) {
                        if (i != j && j != k && k != i) {
                            s[i] = s[j] = s[k] = 1;
                            pass = 1;
                        }
                    }
                }
            }
            if (pass == 0) {
                s[i] = -1;
            }
        }
        REP(i, 0, a) {
            if (s[i] == -1) {
                cout << i << " ";
            }
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