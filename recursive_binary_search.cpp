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

int binarysearch(int *arr, int key, int l, int r)
{
	if (l > r)
	{
		return -1;
	}

	int mid = (l + r) >> 1;

	if (arr[mid] == key)
	{
		return mid;
	}
	else if (arr[mid] < key)
	{
		return binarysearch(arr, key, mid + 1, r);
	}
	else
	{
		return binarysearch(arr, key, l, mid - 1);
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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int key;
		cin >> key;

		cout << binarysearch(arr, key, 0, n - 1) << endl;



	}
	return 0;
}