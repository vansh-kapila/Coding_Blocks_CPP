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
  
  
int32_t main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int test; 
    cin>>test; 
    while(test--){ 

    	int n;
    	cin>>n;
    	int q;
    	cin>>q;
    	int arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin>>arr[i];
    		cout<<arr[i]<<endl;
    	}

    	for (int i = 0; i < q; ++i)
    	{
    		/* code */
    		int a;
    		cin>>a;
    		//cout<<upper_bound(arr,arr+n,a)-lower_bound(arr,arr+n,a)<<endl;
    	}


         
         
       
    } 
    return 0; 
    } 