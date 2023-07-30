#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int x;
	int y;
	int ans = 0;
	while (n --) {
		cin >> x >> y;
        if (x - y > 0) {
			ans++;
		}
	}
	cout << ans << endl;
	return;
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
        Solve(n);
    }
    return 0;
}