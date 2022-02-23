#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110], b[110], c[110];
	cin >> t;
	while(t --) {
		cin >> n;
		int tmp = 0;
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = 0; i < n; i ++) cin >> b[i];
		for(int i = 0; i < n; i ++) cin >> c[i];
		for(int i = 0; i < n; i ++) {
			if(i != n - 1) {
				if(tmp != a[i]) tmp = a[i];
				else if(tmp != b[i]) tmp = b[i];
				else tmp = c[i];
			} else {
				if(tmp != a[i] && a[i] != a[0]) tmp = a[i];
				else if(tmp != b[i] && b[i] != a[0]) tmp = b[i];
				else tmp = c[i];
			}
			cout << tmp << ' ';
		}
		cout << endl;
	}
	return 0;
}
