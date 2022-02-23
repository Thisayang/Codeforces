#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[10];
	cin >> t;
	while (t --) {
		for(int i = 0; i < 7; ++ i) {
			cin >> a[i];
		}
		cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << endl;
	}
	return 0;
}
