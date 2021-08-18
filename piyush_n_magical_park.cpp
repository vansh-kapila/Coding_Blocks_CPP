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

		int m, n;
		cin >> m >> n;
		int k, s;
		char arr[m][n];
		cin >> k >> s;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        bool neg = false;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] == '.')
				{
					s -= 2;
				}
				if (arr[i][j] == '*')
				{
					s += 5;
				}

				if (arr[i][j] == '#')
				{
					break;
				}

				if(j<m-1)
				{
					s--;
				}

				if(s<0)
				{
					neg = true;
				}
			}
		}

	 
		if (s > k and neg == false)
		{
			cout << "Yes" << endl;
			cout << s << endl;
		}
		else
		{
			cout << "No" << endl;
		}



	}
	return 0;
}