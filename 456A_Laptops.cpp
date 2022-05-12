#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct laptop{
	int p, q;
}l[100010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> l[i].p >> l[i].q;
		if (l[i].p != l[i].q) flg = 1;
	}
	cout << (flg == 1 ? "Happy Alex" : "Poor Alex") << endl;
	return 0;
}