#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], b[110] = {0};
	cin >> n >> a[0];
	int ok = 1, ans = a[0], sum = a[0];
	for(int i = 1; i < n; ++ i) {
		cin >> a[i];
		sum += a[i];
		if(a[i] > a[0] / 2) b[i] = 1;
		else ans += a[i], ok ++;
	}
	sum = sum / 2 + 1;
	if(ans < sum) cout << '0';
	else {
		cout << ok << endl;
		for(int i = 0; i < n; i ++)
			if(b[i] == 0) cout << i + 1 << ' ';
	}
	return 0;
}
