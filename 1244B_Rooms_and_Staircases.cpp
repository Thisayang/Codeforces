#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		int cnt = 0, mx = 0;
		set<int> sett;
		for (int i = 0; i < n; ++ i) {
			if(s[i] == '1') {
				cnt ++;
				mx = max(mx, max(2 * (n - i), 2 * (i + 1))); 
				sett.insert(i);
			}
		}
		if (cnt == 0) cout << n << endl;
		else if (cnt == 1) cout << mx << endl;
		else {
			int ans =  n + *(sett.rbegin()) - *(sett.begin()) + 1;
			cout << (ans > mx ? ans : mx) << endl;
		}
	}
	return 0;
}