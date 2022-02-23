#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[110];
	while(cin >> t) {
		for(int i = 0; i < t; ++ i) cin >> a[i];
		int sum = 0;
		bool flg = 0;
		for(int i = 0; i < t; ++ i) {
			if(a[i] == 1) {
				sum ++;
				flg = 1;
			}
			else if(a[i] == 0 && i + 1 < t && a[i + 1] == 1 && flg) sum ++;
			else if(a[i] == 0 && i + 1 < t && a[i + 1] == 0) flg = 0;
		}
		cout << sum << endl;
	}
	return 0;
}
