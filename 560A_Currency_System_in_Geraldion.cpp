#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector<int> a(1010);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	int mn = *(min_element(a.begin(), a.begin() + n));
	cout << (mn == 1 ? "-1" : "1") << endl;
	return 0;
}