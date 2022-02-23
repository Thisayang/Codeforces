#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll q, a, b, n, s;
	while(cin >> q) {
		while(q --) {
			cin >> a >> b >> n >> s;
			ll sum = a * n + b;
			if(sum < s || s % n > b) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
