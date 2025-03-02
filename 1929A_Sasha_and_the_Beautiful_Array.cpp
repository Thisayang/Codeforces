#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    return *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
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
