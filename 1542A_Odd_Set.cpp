#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
	cin >> t;
	while(t --) {
		cin >> n;
		int sum = 0;
		for(int i = 0; i < 2 * n; ++ i) {
			cin >> a;
			if(a & 1) sum ++;
		}
		if(sum == n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}