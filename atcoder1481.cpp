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

		int arr[n], brr[n];
		for (int i = 0; i < n; i++)
		{
			/* code */
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			/* code */
			cin >> brr[i];
		}
 

		for (int i = 1; i < n; i++)
		{
			brr[i]=min(brr[i],arr[i-1]+brr[i-1]);
		}

		for (int i = 0; i < n; i++)
		{   if(i==0)
			{
				brr[i]=min(brr[i],arr[n-1]+brr[n-1]);
			
			}
			else{
			brr[i]=min(brr[i],arr[i-1]+brr[i-1]);}
		}

		for (int i = 0; i < n; i++)
		{
			cout<<brr[i]<<endl;
		}
        
		 




	}
	return 0;
}