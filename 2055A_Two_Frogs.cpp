#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int a, int b) {
        if (abs(a - b) % 2) {
                cout << "NO" << endl;
                return 0;
        }
        cout << "YES" << endl;
        return 0;
}

int main(void) {
        int t;
        int n;
        int a;
        int b;
        cin >> t;
        while (t--) {
                cin >> n >> a >> b;
                Solve(n, a, b);
        }
        return 0;
}