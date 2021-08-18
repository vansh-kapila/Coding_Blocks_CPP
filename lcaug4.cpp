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
//1 3 6 9 14 18 23 29 36 48//
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;

	int arr[100001]={0};

	/*for (int i = 2; i <= 100001; i++) {
		for (int k = 1; k <= 100001; k += i)
		{
			arr[i]++;
		}
	}*/

	for (int i = 2; i < 100001; i++)
	{
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0 and i != j and j != 1 and j != sqrt(i))
			{
				for (int k = j; k < 100001; k += i)
				{
					arr[k]++;
				}
				for (int k = i / j; k < 100001; k += i)
				{
					arr[k]++;
				}
			}
			if (i % j == 0 and i != j and (j == 1 or j == sqrt(i)))
			{
				for (int k = j; k < 100001; k += i)
				{
					arr[k]++;
				}

			}
		}
	}

	while (test--) {

		int n;
		cin >> n;
		int count = 0;
		cout << arr[n] << endl;

	}
	return 0;
}