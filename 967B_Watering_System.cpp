#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, A, B, sum = 0, ans = 0;
	vector<int> a(100010);
	cin >> n >> A >> B;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		sum += a[i];
	}
	int cnt = A * a[0];
	sort(a.begin() + 1, a.begin() + n, cmp);
	for (int i = 1; i <= n; ++ i) {
		if (cnt / sum >= B){
			cout << i - 1 << endl;
			break;
		} else sum -= a[i];
	}
	return 0;
}