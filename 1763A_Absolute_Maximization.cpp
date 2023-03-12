#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve()
{
    int n;
    int maxBits = 15;
    int num = 2;
    int tmp;
    cin >> n;
    vector<int> a(maxBits, 0);
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        int flg = 0;
        while (tmp > 0) {
            a[flg ++] += tmp % num;
            tmp /= num;
        }
    }
    int max = 0;
    int min = 0;
    int flg = 1;
    for (int i = 0; i < maxBits; ++i) {
        if (a[i] != 0) max += flg;
        if (a[i] == n) min += flg;
        flg *= num;
    }
    cout << max - min << endl;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        Solve();
    }
	return 0;
}