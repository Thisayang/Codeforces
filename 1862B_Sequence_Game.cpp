#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
        int a[n] = {0};
        int tmp = -1;
        int ans = n;
        cin >> a[0];
        for (int i = 1; i < n; ++i) {
                cin >> a[i];
                if (a[i] < a[i - 1])
                        ++ans;
        }
        cout << ans << endl << a[0] << " ";
        for (int i = 1; i < n; ++i) {
                if (a[i] < a[i - 1])
                        cout << (a[i] - 1 == 0 ? a[i] : a[i] - 1)  << " ";
                cout << a[i] << " ";
        }
        cout << endl;
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
        }
        return 0;
}