#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp, x[200010] = {0}, sum = 0;
	vector <int> a(200010);
	set<int> sett;
	cin >> n;
	for (int i = 1; i <= n; ++ i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		if (x[tmp] == 1) cout << 0 << " "; 
		else {
			for (int j = sum, cnt = 0; j < n; ++ cnt) {
				x[a[j + cnt]] = 1;
				if (a[j + cnt] == tmp) {
					cout << cnt << " ";
					sum += cnt;
					break;
				}
			}
		}
	}
	return 0;
}