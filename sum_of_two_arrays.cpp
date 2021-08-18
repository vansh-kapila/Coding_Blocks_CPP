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

		for (int i = 0; i < n; i++) cin >> arr[i];


		int m;
		cin >> m;

		int brr[m];

		for (int i = 0; i < m; i++) cin >> brr[i];

		int k = max(m - 1, n - 1);
		
		int ans[k + 2];

		int i = n - 1;
		
		k++;
		
		int j = m - 1;
		
		int dup = k;
		
		for (int i = 0; i < k + 1; i++)ans[i] = 0;
		
		while (i >= 0 or j >= 0 or k >= 0)
		{
			if (i >= 0 and j >= 0) {
				ans[k] += (arr[i] + brr[j]);
			}

			else if (i >= 0)
			{
				ans[k] += (arr[i]);
			}

			else if (j >= 0)
			{
				ans[k] += (brr[j]);
			}

			if (ans[k] >= 10)
			{
				ans[k] = (ans[k] - 10);
				ans[k - 1]++;
			}
			k--;
			i--;
			j--;
		}
        bool found = false;
		for (int i = 0; i < dup + 1; i++)
		{  
		    if((ans[i]>0 and found==false) or found==true)
			{found = true;
			cout << ans[i] << ", ";
			}
		}
		cout << "END" << endl;


		return 0;
	}
}

//output:-AC.