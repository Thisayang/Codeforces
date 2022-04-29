#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[1010], b[1010];
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	cout << b[n - k] << endl;
	for (int i = 0, cnt = 0; i < n && cnt < k; ++ i) {
		if (a[i] >= b[n - k]) {
			cout << i + 1 << " ";
			cnt ++;
		}
	}
	cout << endl;
	return 0;
}