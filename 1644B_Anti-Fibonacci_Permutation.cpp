#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int a[50];
		if (n == 3) {
			cout << "3 2 1\n1 3 2\n3 1 2" << endl;
		} else {
			for (int i = n; i > 0; -- i) {
				cout << i << " ";
			}
			cout << endl;
			for (int i = 1; i < n - 1; ++ i) {
				cout << 2 << " ";
				int max = n - 1;
				for(int j = 1; j < n - 1; ++ j) {
					if (i == j) cout << n << " ";
					else {
						cout << max << " ";
						max --;
					}
				}
				cout << 1 << endl;
			}
			for(int i = n; i > 2; -- i) {
				cout << i << " ";
			}
			cout << "1 2" << endl;
		}
	}
	return 0;
}
