#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[4];
	while(cin >> t) {
		while(t --){
			for(int i = 0; i < 4; ++ i) cin >> a[i];
			sort(a, a + 4);
			cout << a[0] * a[2] << endl;
		}
	}
	return 0;
}
