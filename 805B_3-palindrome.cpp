#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		if (i % 4 < 2) cout << 'a';
		else cout << 'b';
	}
	cout << endl;
	return 0;
}