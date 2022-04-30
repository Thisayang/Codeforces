#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n; 
	for (int i = 0; i < 3; ++ i) {
		cin >> a >> b;
		if (a == n) n = b;
		else if (b == n) n = a;
	}
	cout << n << endl;
	return 0;
}