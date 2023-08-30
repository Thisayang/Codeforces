#include <bits/stdc++.h>
#define ll long long
using namespace std;

typedef struct {
	int x;
	int y;
} pos;

int Dis(pos a, pos b)
{
	return abs(a.x - b.x) + abs(a.y - b.y);
}

int Solve(void)
{
	pos a;
	pos b;
	pos c;
	cin >> a.x >> a.y;
	cin >> b.x >> b.y;
	cin >> c.x >> c.y;
	int ans = (Dis(a, b) + Dis(a, c) - Dis(b, c)) / 2 + 1;
	return ans;
}

int main(void)
{
	std::ios::sync_with_stdio(false);
 	std::cin.tie(NULL);
 	std::cout.tie(NULL);

 	int t;
 	std::cin >> t;
 	while (t--)
 	{
 		cout << Solve() << endl;
 	}
	return 0;
}