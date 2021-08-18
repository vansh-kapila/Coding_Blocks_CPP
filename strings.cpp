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

	int test=1;
	//cin >> test;
	while (test--) {

		int k;
		cin >> k;

		string str;
		cin >> str;

		int n = str.length();
		int x = 0;
		int y = 0;
		int ans = 0;
		bool first = true;
		int index = 0;
		for (int i = 0; i < n; i++)
		{
			if (str[i] == 'a' and first==true)
			{
				x++;
				index = i;
				first = false;
			}
			 
				y++;
			
			if (x == k)
			{
				ans = max(ans, y);
				x--;
				i = index+1;
				first = true;
			}
		}

		
          

          cout<<ans<<endl;


	}
	return 0;
}