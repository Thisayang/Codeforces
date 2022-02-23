#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100010];
	while(cin >> n) {
		bool flg = 1;
		int mmin = 1000000001, num;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			if(mmin > a[i]) flg = 1, num = i + 1, mmin = a[i];
			else if(mmin == a[i]) flg = 0;
		}
		if(flg) cout << num << endl;
		else cout << "Still Rozdil" << endl;
	}
	return 0;
}
