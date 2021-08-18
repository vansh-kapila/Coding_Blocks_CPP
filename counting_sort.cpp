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
		int n;
		cin >> n;
		int arr[n];
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}

		int count[max + 1];

		for (int i = 0; i < max + 1; i++)
		{
			count[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			count[arr[i]]++;
		}

		for (int i = 0; i < max + 1; i++)
		{
			if (count[i] > 0)
			{
				for (int j = 0; j < count[i]; j++)
				{
					cout << i << " ";
				}
			}
		}

 

	}
	return 0;
}