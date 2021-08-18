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

	int test=1;
	//cin >> test;
	while (test--) {

		int n;
		cin >> n;
		int count[64]={0};
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int x;
			cin>>x;
			int j = 0;
			while(x>0)
			{
				count[j]+=x%2;
				x = x/2;
				j++;
			}
		}
        
        int ans = 0;
        int p = 1;
		for(int i=0;i<64;i++)
		{
           ans = ans + (count[i]%3)*p;
           p=p*2;
		}

		cout<<ans<<endl;
        

		

	}
	return 0;
}