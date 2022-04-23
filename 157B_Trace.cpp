#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector<int> a(110);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sort(a.begin(), a.begin() + n, cmp);
	int s = 0;
	for (int i = 0; i < n; ++ i) {
		if (i % 2 == 0) s += a[i] * a[i];
		else s -= a[i] * a[i];
	}
	printf("%.10lf\n", s * 3.1415926536);
	return 0;
}