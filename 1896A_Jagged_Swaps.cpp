#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
        int a[n];
        for (int i = 0; i < n; ++i) {
                cin >> a[i];
        }
        if (a[0] != 1) {
                cout << "NO" << endl;
                return 0;
        }
        cout << "YES" << endl;
        return 0;
}

int main(void) {
        int t;
        int n;
        cin >> t;
        while (t--) {
                cin >> n;
                Solve(n);
        }
        return 0;
}
