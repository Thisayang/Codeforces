#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int cnt[4], flg = 1;
	FOR(i, 0, 4) {
		cin >> cnt[i];
	}
	if (cnt[0] != cnt[3] || (cnt[2] != 0 && cnt[0] == 0 && cnt[3] == 0)) flg = 0;
	cout << flg << endl;
	return 0;
}