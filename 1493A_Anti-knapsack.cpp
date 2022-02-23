#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			int x = k / 2 + k % 2;
			cout << n - x << endl;
			for(int i = x ; i <= n; ++ i) {
				if(i == k) continue;
				cout << i << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
