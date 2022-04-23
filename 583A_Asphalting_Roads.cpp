#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, h, v, x[60] = {0}, y[60] = {0};
	cin >> n;
	for (int i = 0; i < n * n; ++ i) {
		cin >> h >> v;
		if (x[h] == 0 && y[v] == 0) {
			x[h] = 1;
			y[v] = 1;
			cout << i + 1 << " ";
		}
	}
	return 0;
}