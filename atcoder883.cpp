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

    int test=1; 
   // cin>>test; 
    while(test--){ 

    	int h,w,n;
    	cin>>h>>w>>n;
        vector<pair<int,int>> v;
        vector<pair<int,int>> vv;
    	for(int i=0;i<n;i++)
    	{
    		int x,y;
    		cin>>x>>y;
    		v.push_back(make_pair(x,y));
    		vv.push_back(make_pair(x,y));
    	}

    	sort(v.begin(),v.end());
    	sort(vv.begin(),vv.end());
    	int k = 1;
        v[0].first = 1;
    	for(int i=1;i<n;i++)
    	{   vv[i].first = k;
            if(v[i-1].first<vv[i].first)
            {
            	continue;
            }
            else
            {

            }
    	}




         
         
       
    }
    return 0; 
    }