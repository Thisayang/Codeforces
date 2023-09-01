#include <bits/stdc++.h>

using namespace std;
typedef struct {
	int x;
	int y;
}pos;

int Solve(int n, int m, int k)
{
	pos p;
	pos a;
	int ans = 0;
	cin >> p.x >> p.y;
	for (int i = 0; i < k; ++i) {
		 cin >> a.x >> a.y;
		 if ((abs(a.x - p.x) + abs(a.y - p.y)) % 2 == 0) {
			ans = 1;
		 }
	}
	return ans;
}

int main()
{
	int t;
	int n;
	int m;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		cout << (Solve(n, m, k)  == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}