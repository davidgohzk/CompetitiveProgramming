#include <bits/stdc++.h>

using namespace std;

void solve() {
    int i, j, k, n, a, b;
    string s;
    char c;
    long long f;

    cin >> a >> b;
    int x, y, n1, n2;
    i = j = k = x = y = n1 = n2 = 0;

    while (a > 0 || b > 0) {
        int a1 = a % 10;
        int b1 = b % 10;

        if (a1 > b1) {
            x += a1 * pow(10, i);
            n1 = 1;
            i++;
        }
        if (a1 == b1) {
            x += a1 * pow(10, i);
            y += b1 * pow(10, j);
            n1 = 1;
            n2 = 1;
            i++;
            j++;
        }
        if (a1 < b1) {
            y += b1 * pow(10, j);
            n2 = 1;
            j++;
        }

        a /= 10;
        b /= 10;
    }
    if (n1 == 0) {
        cout << "YODA\n";
    } else {
        cout << x << "\n";
    }

    if (n2 == 0) {
        cout << "YODA\n";
    } else {
        cout << y << "\n";
    }
}

int main() {
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";

        solve();
    }
}