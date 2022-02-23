#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while(t --) {
		cin >> n >> s;
		sort(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}
