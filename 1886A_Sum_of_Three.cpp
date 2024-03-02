#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            if (i + j >= n || i == j) {
                continue;
            }
            int z = n - i - j;
            if (i == z || j == z || i % 3 == 0 || j % 3 == 0 || z % 3 == 0) {
                continue;
            }
            cout << "YES" << endl;
            cout << i << " " << j << " " << z;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        Solve(n);
        cout << endl;
    }
    return 0;
}
