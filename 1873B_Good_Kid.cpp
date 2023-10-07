#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
        vector<int> a(n, 0);
        long long ans = 1;
        for (int i = 0; i < n; ++i)
                cin >> a[i];
        auto min = min_element(a.begin(), a.end());
        ++(*min);
        for (int i = 0; i < n; ++i)
                ans *= a[i];
        return ans;
}

int main(void)
{
        int t;
        int n;
        cin >> t;
        while (t--) {
                cin >> n;
                cout << Solve(n) << endl;
        }
        return 0;
}
