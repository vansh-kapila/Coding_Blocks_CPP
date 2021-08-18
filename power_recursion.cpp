/* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/

#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define int long long
#define ld long double
#define endl "\n";

#define f(a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i>b;i--)

const int mod = 1000000007;
using namespace std;

power(int n, int p)
{
	if (p == 0)
	{
		return 1;
	}

	int ans = power(n, p / 2);
	ans = ans * ans;
	if (p % 2 == 1)
	{
		return ans * n;
	}

	return ans;

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
		int p;
		cin >> p;

		cout << power(n, p) << endl;


	}
	return 0;
}