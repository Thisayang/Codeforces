#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[30] = {0}, flg = 0, num = 0;
	cin >> t;
	while(t) {
		flg ++;
		if(t & 1) a[++ num] = flg;
		t >>= 1;
	}
	for(int i = num; i > 0; -- i)
		cout << a[i] << ' ';
	return 0;
}
