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

		char str;
		cin >> str;

		if (str >= 'A' and str <= 'Z')
		{
			cout << "UPPERCASE" << endl;
		}

		else if (str >= 'a' and str <= 'z')
		{
			cout << "lowercase" << endl;
		}

		else
		{
			cout << "Invalid" << endl;
		}


	}
	return 0;
}