#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, id;
    while(cin >> n >> k) {
        queue<int> q;
        set<int> s;
        set<int>::iterator it;
        for(int i = 0; i < n; ++ i) {
            cin >> id;
            it = s.find(id);
            if(it != s.end())  continue;
            s.insert(id);
            q.push(id);
            if(q.size() > k) {
                s.erase(q.front());
                q.pop();
            }
        }
        stack<int> st;
        cout << q.size() << endl;
        while(!q.empty()) {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()) {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
	return 0;
}
