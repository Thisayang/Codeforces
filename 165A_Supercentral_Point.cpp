#include <bits/stdc++.h>
#define ll long long int
using namespace std;
typedef pair<int, int> point;
point p[210];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> p[i].first >> p[i].second;
	}
	int ans = 0;
	for (int i = 0; i < n; ++ i) {
		int a = 0, b = 0, c = 0, d = 0;
		for (int j = 0; j < n; ++ j) {
			if (i == j) continue;
			if (p[i].first == p[j].first && p[i].second < p[j].second) a = 1;
			else if (p[i].first == p[j].first && p[i].second > p[j].second) b = 1;
			else if (p[i].first > p[j].first && p[i].second == p[j].second) c = 1;
			else if (p[i].first < p[j].first && p[i].second == p[j].second) d = 1;
			if (a + b + c + d == 4) {
				ans ++;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}