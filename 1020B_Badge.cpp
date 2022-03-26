#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
struct student {
	int pos, cnt = 0;
};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x;
	vector <int> a(1010);
	cin >> n;
	for (int i = 1; i <= n; ++ i) {
		cin >> x;
		a[i] = x; 
	}
	for (int i = 1; i <= n; ++ i) {
		student stu[1010];
		int tmp = i;
		while (stu[tmp].cnt < 2) {
			stu[tmp].cnt ++;
			stu[tmp].pos = a[tmp];
			if (stu[tmp].cnt == 2) {
				cout << tmp << " ";
				break;
			}
			tmp = a[tmp];
		}
	}
	cout << endl;
	return 0;
}
