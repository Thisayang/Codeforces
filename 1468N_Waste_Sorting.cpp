#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[3], s[5];
	while(cin >> t) {
		while(t --) {
			int an[3] ={0};
			cin >> a[0] >> a[1] >> a[2];
			for(int i = 0; i < 5; ++ i) {
				cin >> s[i];
				if(i < 3) an[i] = s[i];
				else {
					int tmp = min(s[i], max(a[i - 3] - an[i - 3], 0));
					an[i - 3] += tmp;
					s[i] -= tmp;
					an[2] += s[i];
				}
			}
			if(an[0] <= a[0] && an[1] <= a[1] && an[2] <= a[2]) cout <<  "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
