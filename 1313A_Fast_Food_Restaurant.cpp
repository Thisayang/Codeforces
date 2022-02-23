#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[3];
	while(cin >> t) {
		while(t --) {
			cin >> a[0] >> a[1] >> a[2];
			int sum = 0;
			sort(a, a + 3);
			if(a[0]) a[0] --, sum ++;
			if(a[1]) a[1] --, sum ++;
			if(a[2]) a[2] --, sum ++;
			if(a[0] == 0 && a[1] > 0) sum ++;
			else if(a[0] == 1 && a[2] == 1) sum ++;
			else if(a[0] == 1 && a[2] > 1) sum += 2;
			else if(a[0] == 2) sum += 3;
			else if(a[0] >= 3) sum += 4;
			cout << sum << endl;
		}
	}
	return 0;
}
