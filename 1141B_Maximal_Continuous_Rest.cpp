#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[200010];
	while(cin >> n) {
		int max = 0, tmp = 0;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		for(int i = 0; i < 2 * n; ++ i) {
			if(a[i % n] == 1) tmp ++;
			else max = max > tmp ? max : tmp, tmp = 0;
		}
		cout << max << endl;
	}
	return 0;
}
