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


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 1;
	//cin >> test;
	while (test--) {

		int n, p;
		cin >> n >> p;

		int l = 0, r = n;
		int mid = 0;
		double ans = 0;

		while (l <= r)
		{
			mid = (l + r) / 2;

			if (mid * mid < n)
			{
				l = mid + 1;
				ans = mid;
			}

			else if (mid * mid == n)
			{
				ans = mid;
				break;
			}

			else if (mid * mid > n)
			{
				r = mid - 1;
			}

		}
		double add = 0;
		double j = 0.1;
		for (int i = 0; i < p; i++)
		{
			while (ans * ans <= n)
			{
				ans += j;
			}
			ans = ans - j;

			j = j / 10;
		}

		cout << ans << endl;



	}

	return 0;
}
