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

		int x;
		cin >> x;


		long long y = 0;
		int k = 0;
		while (x != 0)
		{	if (x / 10 == 0 and x % 10 == 9)
			{
				y += 9 * pow(10, k);
			}
			else
			{
				y += min(x % 10, 9 - x % 10) * pow(10, k);
			}

			k++;
			x = x / 10;
		}

		cout << y << endl;
	}
	return 0;
}