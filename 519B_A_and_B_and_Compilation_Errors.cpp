#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	map<int, int> mp1, mp2, mp3;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		mp1[a] ++;
	}
	for (int i = 1; i < n; ++ i) {
		cin >> a;
		mp2[a] ++;
	}
	for (auto it = mp1.begin(); it != mp1.end(); ++ it) {
		if (it -> second - mp2[it -> first] == 1) {
			cout << it -> first << endl;
		}
	}
	for (int i = 2; i < n; ++ i) {
		cin >> a;
		mp3[a] ++;
	}
	for (auto it = mp2.begin(); it != mp2.end(); ++ it) {
		if (it -> second - mp3[it -> first] == 1) {
			cout << it -> first << endl;
		}
	}
	return 0;
}