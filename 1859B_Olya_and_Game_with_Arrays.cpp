#include <bits/stdc++.h>

using namespace std;

long long Solve(int n)
{
	int cnt;
	long long minn = 1e9 + 7;
	vector<long long> vec;
	for (int i = 0; i < n; ++i) {
		cin >> cnt;
		vector<long long> vex(cnt);
		for (auto &v : vex)
			cin >> v;
		long long minel = *min_element(vex.begin(), vex.end());
		minn = min(minn, minel);
		vex.erase(find(vex.begin(), vex.end(), minel));
		vec.push_back(*min_element(vex.begin(), vex.end()));
	}
	return minn + accumulate(vec.begin(), vec.end(), 0ll) - *min_element(vec.begin(), vec.end());
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