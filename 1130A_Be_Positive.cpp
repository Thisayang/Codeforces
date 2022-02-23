#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], pos = 0, neg = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i){
		cin >> a[i];
		if(a[i] > 0) pos ++;
		else if(a[i] < 0) neg ++;
	}
	if(n & 1) n = n / 2 + 1;
	else n = n / 2;
	if(pos >= n) cout << 1;
	else if(neg >= n) cout << -1;
	else cout << 0;
	return 0;
}
