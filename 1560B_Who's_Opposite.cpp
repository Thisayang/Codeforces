#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[1001], x;
    for(int i = 1, j = 1; j < 1001; ++ i) {
        if (i % 3 == 0 || i % 10 == 3) {
            continue;
        }
        a[j ++] = i;
    }
 
    cin >> t;
    while(t --) {
        cin >> x;
        cout << a[x] << endl;
    }
	return 0;
}