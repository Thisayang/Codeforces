#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> p(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> p[i];
		}
		int cnt = 0;
		for (int i = 1; i < n; ++ i) {
			if (p[i] < p[i - 1]) {
				cnt ++;
				i ++;
			}
		}
		cout << cnt << endl;
		
	}
	return 0;
}