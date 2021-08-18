/* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/

#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define ld long double
#define endl "\n";

#define f(a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i>b;i--)

const int mod = 1000000007;
using namespace std;

bool sorted(int *arr, int n)
{
	if (n == 0 or n == 1)
	{
		return true;
	}

	if (arr[0] <= arr[1] and sorted(arr + 1, n - 1))
	{
		return true;
	}

	return false;


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
		f(0, n)cin >> arr[i];

		cout << sorted(arr, n - 1) << endl;



	}
	return 0;
}