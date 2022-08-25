#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, tmp;
	cin >> n;
	vector<int> a(n + 1, 0);
	FOR(i, 1, n + 1) {
		cin >> tmp;
		a[i] = a[i - 1] + tmp;
	}
	cin >> m;
	FOR(i, 0, m) {
		cin >> tmp;
		int st = 1, end = n;
		while (st <= end) {
			int mid = (st + end) / 2;
			if (a[mid] < tmp) st = mid + 1;
			else if (a[mid] > tmp) {
				if (a[mid - 1] < tmp) {
					cout << mid << endl;
					break;
				} else if (a[mid - 1] == tmp) {
					cout << mid - 1 << endl;
					break;
				}
				end = mid - 1;
			} else {
				cout << mid << endl;
				break;
			}
		}
	}
	return 0;
}