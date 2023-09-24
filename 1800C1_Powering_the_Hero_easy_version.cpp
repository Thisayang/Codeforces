#include <bits/stdc++.h>

using namespace std;

long long Solve(int n)
{
	map<long long, int> mp;
	long long ans = 0;
	long long tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp != 0) {
			++mp[tmp];
		} else if (!mp.empty()) {
			ans += mp.rbegin()->first;
			--mp.rbegin()->second;
			if(mp.rbegin()->second == 0) {
				auto it = mp.rbegin();
				mp.erase(next(it).base());
			}	
		}
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