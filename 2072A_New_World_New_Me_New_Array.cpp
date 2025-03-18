#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k, int p) {
        if (n * p < abs(k)) {
                cout << -1 << endl;
                return 0;
        }
        cout << (abs(k) + p - 1) / p << endl;
        return 0;
}

int main(void) {
        int t;
        int n;
        int k;
        int p;
        cin >> t;
        while (t--) {
                cin >> n >> k >> p;
                Solve(n, k, p);
        }
        return 0;
}
