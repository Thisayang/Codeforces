#include <bits/stdc++.h>
#define MAX (1e9 + 10)
using namespace std;

int Solve(int n)
{
    int max = 0;
    int min = MAX;
    int a;
    int x;
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        cin >> a >> x;
        if (a == 1 && x > max) {
            max = x;
        } else if (a == 2 && x < min) {
            min = x;
        } else if (a == 3) {
            st.push(x);
        }
    }
    int ans = (min - max + 1 > 0 ? min - max + 1 : 0);
    while (!st.empty()) {
        if (st.top() >= max && st.top() <= min) {
            --ans;
        }
        st.pop();
    }
    return ans;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << Solve(n) << endl;
    }
    return 0;
}
