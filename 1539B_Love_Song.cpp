#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, q, l, r, cd[100010] = {0};
	string s;
	cin >> n >> q >> s;
	for(int i = 0; i < n; ++ i) {
		cd[i + 1] = cd[i] + s[i] - 'a' + 1;
	}
	for(int i = 0; i < q; ++ i) {
		int sum = 0;
		cin >> l >> r;
		sum = cd[r] - cd[l - 1];
		cout << sum << endl;
	}
	return 0;
}
