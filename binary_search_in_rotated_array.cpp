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

binarysearch(int arr[],int m,int n,int x)
{
	 int l = m, r = n - 1;
        bool found = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                return mid;
                found = true;
                break;
            }
            else if (arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
               r=mid-1;
            }
        }
 
            return -1;
        
}


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test=1;
	//cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
        int x = 0;
        int key;
        cin>>key;
		for(int i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				x = i;
				break;
			}
		}
        
       if(binary_search(arr,arr+x+1,key)==true or binary_search(arr+x+1,arr+n,key)==true)
       {
       	cout<<max(binarysearch(arr,0,x+1,key),binarysearch(arr,x,n,key))<<endl;
       }
       else
       {
       	cout<<-1<<endl;
       }

	}
	return 0;
}