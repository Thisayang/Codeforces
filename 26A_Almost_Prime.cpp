#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[3010] = {1, 1};
	for(int i = 2; i < 1501; ++ i) {
		if(a[i] != 0) continue;
		for(int j = 2; i * j < 3001; ++ j) a[i * j] ++;
	}
	while(cin >> n) {
		int sum = 0;
		for(int i = 6; i <= n; ++ i) {
			if(a[i] == 2) sum ++;
		}
		cout << sum << endl;
	}
	return 0;
}
