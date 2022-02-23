#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string home, s;
	while(cin >> n >> home) {
		for(int i = 0; i < n; ++ i) cin >> s;
		cout << (n & 1 ? "contest" : "home") << endl;
	}
	return 0;
}
