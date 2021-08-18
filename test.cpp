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

	int test;
	cin >> test;
	while (test--) {

		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int inc[n];
		int dec[n];
		for (int i = 0; i < n; i++) inc[i] = 1;
		for (int i = 0; i < n; i++) dec[i] = 1;

		for (int i = n - 2; i >= 0; i--)
		{
			if (arr[i] >= arr[i + 1])
			{
				dec[i] = dec[i + 1] + 1;
			}

		}

		for (int i = 1; i < n ; i++)
		{
			if (arr[i] >= arr[i - 1])
			{
				inc[i] = inc[i - 1] + 1;
			}

		}

		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans = max(inc[i] + dec[i] - 1, ans);
		}

		cout << ans << endl;

	}
	return 0;
}