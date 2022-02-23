#include <bits\stdc++.h>
#define LL long long
#define loop(i, n, m) for(int i = n; i < m; ++ i)
bool cmp(int a, int b) {return a > b;}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	while(cin >> t) {
		while(t --) {
			int sum = 0;
			cin >> n;
			loop(i, 0, n) {
				cin >> a[i];
				sum += a[i];
			}
			if(sum == 0) cout << "NO";
			else {
				cout << "YES" << endl;
				if(sum > 0) sort(a, a + n, cmp);
				else sort(a, a + n);
				loop(i, 0, n) cout << a[i] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
