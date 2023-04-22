#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7; 
using namespace std;

void Solve(int n)
{
	int a[n];
	int odd = 0;
	int even = 0;
	int max = 3;
	int flg1 = 0;
	int flg2 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] & 1) {
			odd++;
		} else even++;
	}
	if (odd >= 3) {
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i) {
			if ((a[i] & 1) && flg1 < 3) {
				cout << i + 1 << " ";
				flg1 ++;
			}
		}
		cout << endl;
	} else if (odd > 0 && even != 1) {
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i) {
			if ((a[i] & 1) && flg1 < 1) {
				cout << i + 1 << " ";
				flg1 ++;
			} else if (!(a[i] & 1) && flg2 < 2) {
				cout << i + 1 << " ";
				flg2 ++;
			}
		}
		cout << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	int n;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}