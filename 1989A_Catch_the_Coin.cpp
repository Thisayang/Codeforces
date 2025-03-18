#include <bits/stdc++.h>

using namespace std;

int Solve(int x, int y) {
        if (y < -1) {
                cout << "NO" << endl;
                return 0;
        }
        cout << "YES" << endl;
        return 0;
}

int main(void) {
        int t;
        int x;
        int y;
        cin >> t;
        while (t--) {
                cin >> x >> y;
                Solve(x, y);
        }
        return 0;
}
