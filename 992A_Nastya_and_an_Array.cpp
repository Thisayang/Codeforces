#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp, ok = 0, ans;
	set<int> s;
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> tmp;
		if(tmp == 0) ok = 1;
		s.insert(tmp);
	}
	if(ok == 1) ans = s.size() - 1;
	else ans = s.size();
	cout << ans;
	return 0;
}
