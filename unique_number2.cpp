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

		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> arr[i];
		}

		int x = arr[0];
		for (int i = 1; i < n; i++)
		{
			x = x ^ arr[i];
		}
		int k = 0;
		int tt = (int)log2(x) + 1;
		vector<int> v;
		int temp = x;
		while (tt--)
		{	k++;
			if (x % 2 == 1)
			{
				for (int i = 0; i < n; i++)
				{
					if ((arr[i] >> (k - 1)) % 2 == 1)
					{
						v.push_back(arr[i]);
					}
				}

				break;
			}
			x = x >> 2;
		}

		vector<int> ans;

		int z = v[0];

		for (int i = 1; i < v.size(); i++)
		{
			z = z ^ v[i];
		}
		ans.push_back(z);
		for (int i = 0; i < 100000; i++)
		{
			if ((z ^ arr[i]) == temp)
			{
				ans.push_back(arr[i]); 
				break;
			}
		}

		sort(ans.begin(), ans.end());
		cout << ans[0] << ' ' << ans[1] << endl;











	}
	return 0;
}