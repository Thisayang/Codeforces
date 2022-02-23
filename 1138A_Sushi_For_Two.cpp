#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	while(cin >> n) {
		int num1 = 0, num2 = 0, tmp1 = 0, tmp2 = 0, flg = 1, ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(a == 1 && flg == 1) num1 ++;
			else if(a == 1 && flg == 2) {
				flg = 1;
				ans = max(min(tmp1, num2) * 2, ans);
				tmp2 =num2;
				num2 = 0;
				num1 ++;
			}
			if(a == 2 && flg == 2) num2 ++;
			else if(a == 2 && flg == 1) {
				flg = 2;
				ans = max(min(tmp2, num1) * 2, ans);
				tmp1 = num1;
				num1 = 0;
				num2 ++;
			}
		}
		ans = max(min(tmp2, num1) * 2, ans);
		ans = max(min(tmp1, num2) * 2, ans);
		cout << ans << endl;
	}
	return 0;
}
