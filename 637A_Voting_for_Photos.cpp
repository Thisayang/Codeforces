#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, max = 0, ans;
	map<int, int> mp;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> a;
		mp[a] ++;
		if (max < mp[a]) {
			ans = a;
			max = mp[a];
		}
	}
	cout << ans << endl;
	return 0;
}