#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
    cin >> t;
    while(t --) {
        cin >> n;
        int Min = 100000;
        map<int, int> st;
        for(int i = 0; i < n; ++ i) {
            cin >> a[i];
            Min = min(Min, a[i]);
            if(st.find(a[i]) == st.end()) {
                st[a[i]] = 1;
            } else st[a[i]] ++;
        }
        cout << n - st[Min] << endl;
    }
	return 0;
}
