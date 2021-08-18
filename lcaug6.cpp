/* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/

#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define int long long
#define ld long double
#define endl "\n";

const int mod = 1000000007;
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.first > b.first;
}

int lcm(int x, int y)
{
	return (x * y / (__gcd(x, y)));
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	while (test--) {

		int n;
		cin >> n;
		int m;
		cin >> m;

		vector<pair<int, int>> v;
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}

		sort(v.begin(), v.end(), compare);

		int ans = 0;
		int g = v[0].second;
		ans += (n - n / g) * v[0].first;
		//ans = v[0].first*(n-n/g);
		//n=(n/g)*g;
		int l = g;
		int t = n / l;
		for (int i = 1; i < m; i++)
		{
			if (t > 0)
			{
				l = lcm(l, v[i].second);
				ans += (t - n / l) * v[i].first;
				t = n / l;
			}

		}


		cout << ans << endl;


	}
	return 0;
}