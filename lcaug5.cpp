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

	int test;
	cin >> test;
	while (test--) {

		int n;
		cin >> n;
		int arr[n], t[n];
		int dup[n];
		for (int i = 0; i < n; i++) {cin >> arr[i]; dup[i] = arr[i];}
		for (int i = 0; i < n; i++)cin >> t[i];
		int tt = 0;
		int count = 0;
		sort(arr, arr + n);
		int k = 0;
		int kk = 0;
		int dupp = t[0];
		int ttt = 0;
		while (dupp >= arr[k] and k < n)
		{
			dupp = dupp - arr[k];

			if (dupp >= 0)
			{	count++;

			}
			tt = tt + arr[k];
			k++;
		}
		cout << count << endl;
		int f = 0;
		int l = 1000000007;
		while (t[0] >= arr[kk])
		{
			t[0] = t[0] - arr[kk];

			if (t[0] >= 0 and f != find(dup, dup + n, arr[kk]) - dup + 1)
			{
				cout << find(dup, dup + n, arr[kk]) - dup + 1 << " " << ttt << " " << ttt + arr[kk] << endl;
				f = find(dup, dup + n, arr[kk]) - dup + 1;
				dup[f - 1] = l--;
			}
			else
			{
				cout << ++f << " " << ttt << " " << ttt + arr[kk] << endl;

			}
			ttt = ttt + arr[kk];
			kk++;
		}




	}
	return 0;
}