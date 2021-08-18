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
    //cin>>test; 
    while(test--){ 

    	int n;
    	cin>>n;
    	vector<int> v;
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		v.push_back(x);
    	}
        int q;
        cin>>q;

        for(int i=0;i<q;i++)
        {
        	int z;
        	cin>>z;
        	if(binary_search(v.begin(),v.end(),z)==0)
        	{
        		cout<<-1<<' '<<-1<<endl;
        	}
        	else{
        	int u = upper_bound(v.begin(),v.end(),z)-v.begin();
        	int l = lower_bound(v.begin(),v.end(),z)-v.begin();
        	cout<<l<<" "<<u-1<<endl;}
        }
    	
         
         
       
    } 
    return 0; 
    } 