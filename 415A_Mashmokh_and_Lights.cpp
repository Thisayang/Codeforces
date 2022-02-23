#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a;
	while(cin >> n >> m) {
		int l[110] = {0};
		for(int i = 0; i < m; ++ i) {
			cin >> a;
			for(int j = a; j <= n; ++ j)
				if(l[j] == 0) l[j] = a;
		}
		for(int i = 1; i <= n; ++ i) cout << l[i] << ' ';
		cout << endl;
	}
	
	return 0;
}
