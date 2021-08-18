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

		int i, j;
		cin >> i >> j;

		int mask1 = (n >> (i + 1)) << (i + 1);
		int mask2 = pow(2, j) - 1;

		int mask = mask1 | mask2;

		cout << (n & mask) << endl;




	}
	return 0;
}