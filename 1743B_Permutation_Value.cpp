#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
void Solve(int n)
{
    deque<int> dq;
    for (int i = n; i > 0; --i) {
        if (i & 1 == 1) {
            dq.push_front(i);
        } else {
            dq.push_back(i);
        }
    }
    while (dq.empty() != true) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solve(n);
    }
	return 0;
}