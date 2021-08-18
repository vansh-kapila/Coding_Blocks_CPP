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
	//cin>>test;
	while (test--) {

		string str;
		cin >> str;
		
		int k = 1;
		int n = str.length();
		
		for (int i = 0; i < n; i++)
		{
			if (str[i] == str[i + 1])
			{
				k++;
			}
			else if (str[i] != str[i + 1])
			{
				cout << str[i] << k;
				k = 1;
			}
		}


	}
	
	return 0;
}