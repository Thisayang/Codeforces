#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	if (n == 1) cout << 1 << endl;
	else {
		cout << n;
		for (int i = 1; i < n; ++ i) cout << " " << i;
		cout << endl;
	}
	return 0;
}