#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b , h = 1000000010, flg = 0;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a >> b;
		if (h >= max(a, b)) h = max(a, b);  
		else if (h >= min(a, b)) h = min(a, b);
		else flg = 1;
	}
	cout << (flg == 0 ? "YES" : "NO") << endl;
	return 0;
}