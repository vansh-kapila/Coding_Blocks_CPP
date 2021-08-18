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

		string str1, str2;
		cin >> str1 >> str2;

		string str3 = "";
		char x = '1';
		char y = '0';
		for (int i = 0; i < str1.length(); i++)
		{
			if ((str1[i] == '0' and str2[i] == '1') or (str1[i] == '1' and str2[i] == '0'))
			{
				str3 += x;
			}

			else
			{
				str3 += y;
			}
		}


		cout << str3 << endl;


	}
	return 0;
}