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

bool cows(int mid, int c, int pos[], int n)
{
	int count = 0;
	int k = pos[0];
	for (int i = 0; i < n; i++)
	{
		if (pos[i] - k >= mid)
		{
			count++;
			k = pos[i];
		}
		if (count == c)
		{
			count = 0;
			return 1;
		}

	}


	return 0;

}


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 1;
	//cin >> test;
	while (test--) {

		int n;
		int c;
		cin >> n >> c;

		int pos[n];
		for (int i = 0; i < n; i++)
		{
			cin >> pos[i];
		}
		sort(pos, pos + n);
		int l = 0;
		int r = pos[n - 1];
		int mid = 0;
		int ans = 0;
		while (l <= r)
		{
			mid = (l + r) / 2;

			if (cows(mid, c - 1, pos, n))
			{
				l = mid + 1;
				ans = mid;
			}
			else
			{
				r = mid - 1;
			}
		}

		cout << ans << endl;



	}
	return 0;
}