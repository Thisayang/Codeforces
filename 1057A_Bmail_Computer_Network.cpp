#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int a[200010];
void dfs(int no) {
	if(no != 1) dfs(a[no]);
	cout << no << " ";
	return;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n) {
		for(int i = 2; i <= n; ++ i) cin >> a[i];
		dfs(n);
		cout << endl;
	}
	return 0;
}
