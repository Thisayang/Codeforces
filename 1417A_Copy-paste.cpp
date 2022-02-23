#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		int n, k, min = 10000;
		cin >> n >> k;
		int a[1010] = {0};
		for(int i = 0; i < n; i ++) {
			cin >> a[i];
			if(min > a[i]) min = a[i];
		}
		bool ok = true;
		int sum = 0;
		for(int i = 0; i < n; i ++) {
			if(a[i] == min && ok) {
				ok = !ok;
				continue;
			}
			sum += (k - a[i]) / min;
		}
		cout << sum << endl;
	}
	return 0;
}
