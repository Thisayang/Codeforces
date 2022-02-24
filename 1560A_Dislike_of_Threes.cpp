#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
    cin >> t;
    while (t --) {
        cin >> a >> b >> c;
        int min = a < b ? a : b;
        int max = a > b ? a : b;
        if (max < 2 * min || (max - min) * 2 < c) {
            cout << -1 << endl;
        } else {
            if (c <= max - min) {
                cout << c + max - min << endl;
            } else {
                cout << c - max + min << endl;
            }
        }
    }
	return 0;
}