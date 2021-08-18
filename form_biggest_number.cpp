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

bool order(string a, string b)
{
	if (a + b > b + a)
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
		string arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n, order);
          
        for(int i=0;i<n;i++)
        {
        	cout<<arr[i];
        }

        cout<<endl;

	}
	return 0;
}