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

bool lllength(string a , string b)
{
	if (a > b)
	{
		return true;
	}
	else
	{
		return false;
	}

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
		string str[n];

		for (int i = 0; i < n; i++)
		{
			string x;
			cin >> x;
			str[i] = x;
		}

		sort(str, str + n, lllength);

		for (int i = 0; i < n; i++)
		{
			cout << str[i] << " ";
		}

		cout << endl;

	}
	return 0;
}