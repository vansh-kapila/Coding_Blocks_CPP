/* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/

#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define int long long
#define ld long double
#define endl "\n";

#define f(a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i>b;i--)

const int mod = 1000000007;
using namespace std;

int first(int *arr, int n, int x, int key)
{
	if (x == n)
	{
		return -1;
	}

	if (arr[x] == key)
	{
		return x;
	}


	return first(arr, n, x + 1, key);
}

int lastt(int *arr, int n, int m, int key)
{
	if (arr[m] == key)
	{
		return m;
	}
	if (m == 0)
	{
		return -1;
	}

	return lastt(arr, n, m - 1, key);
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
		
		int arr[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int key;
		cin >> key;
		int z = 0;
		int m = n - 1;

		cout << first(arr, n, z, key) << endl;

		cout << lastt(arr, n, m, key) << endl;




	}
	return 0;
}