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

bool compre(string a, string b)
{
	if (a.find(b) == 0)
	{
		return true;
	}
	else if (b.find(a) == 0)
	{
		return false;
	}
	else if (a > b)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 1;
	//cin >> test;
	while (test--) {
		int n;
		cin >> n;
		string str[n];
		for (int i = 0; i < n; i++)
		{
			cin >> str[i];
		}

		sort(str, str + n, compre);


		for (int i = 0; i < n; i++)
		{
			cout << str[i] << endl;
		}

	}
	return 0;
}