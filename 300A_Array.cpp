#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], cnt = 0;
	queue<int> p, ne, z;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		if (a[i] < 0) cnt ++;
	}
	int flg = 0;
	if (cnt % 2 == 0) {
		for (int i = 0; i < n; ++ i) {
			if (a[i] < 0 && flg == 0) {
				flg = 1;
				ne.push(a[i]);
			} else if (a[i] < 0 && cnt > 2 && flg < 3) {
				flg ++;
				p.push(a[i]);
			}else if (a[i] < 0) {
				z.push(a[i]);
			} else if (a[i] > 0) {
				p.push(a[i]);
			} else z.push(0);
		}
	} else {
		for (int i = 0; i < n; ++ i) {
			if (a[i] < 0 && flg == 0) {
				ne.push(a[i]);
				flg = 1;
			} else if (a[i]!= 0) {
				p.push(a[i]);
			} else if (a[i] == 0) {
				z.push(0);
			}
		}
	}
	cout << ne.size() << " ";
	while (!ne.empty()) {
		cout << ne.front() << " ";
		ne.pop();
	}
	cout << endl <<  p.size() << " ";
	while (!p.empty()) {
		cout << p.front() << " ";
		p.pop();
	}
	cout << endl << z.size() << " ";
	while (!z.empty()) {
		cout << z.front() << " ";
		z.pop();
	}
	cout << endl;
	return 0;
}