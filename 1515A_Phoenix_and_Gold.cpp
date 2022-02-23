#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, a[110];
    cin >> t;
    while(t --) {
        cin >> n >> x;
        int sum = 0;
        for(int i = 0; i < n; ++ i) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum == x) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            queue<int> st;
            sum = 0;
            for(int i = 0; i < n; ++ i) {
                if(sum + a[i] != x) {
                    cout << a[i] << ' ';
                    sum += a[i];
                }
                else st.push(a[i]);
            }
            while(!st.empty()) {
                cout << st.front() << ' ';
                st.pop();
            }
            cout << endl;
        }
    }
	return 0;
}
