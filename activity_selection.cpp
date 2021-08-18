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

bool compare(pair<int, int> x, pair<int, int> y)
{
	if (x.second <= y.second)
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
		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}

		sort(v.begin(), v.end(), compare);
		int count = 1;
		int ans = 0;
        
        //for(int i=0;i<n;i++)  cout<<v[i].first<<" "<<v[i].second<<endl;
        int z = v[0].second;
		for (int i = 0; i < n-1; i++)
		{
			if (z < v[i+1].first)
			{
				count++;
				z = v[i+1].second;
			}
			ans = max(ans, count);

			 
		}

		cout << ans << endl;







	}
	return 0;
}