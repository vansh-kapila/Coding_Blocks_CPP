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

bool condition(pair<string,int> x,pair<string,int> y)
{
	if(x.second==y.second)
	{
		return x.first<y.first;
	}
	else
	{
		return x.second>y.second;
	}
}
  
int32_t main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int test=1; 
    //cin>>test; 
    while(test--){ 
         int x;
         cin>>x;
         int n;
         cin>>n;
         vector<pair<string,int>> v;

         for(int i=0;i<n;i++)
         {
         	string str;
         	int n;
         	cin>>str;
         	cin>>n;
            pair<string,int> p;
            p.first = str;
            p.second = n;
            v.push_back(p);
         }

         sort(v.begin(),v.end(),condition);

         for(int i=0;i<n;i++)
         {
         	if(v[i].second>=x)
         	{
         		cout<<v[i].first<<" "<<v[i].second<<endl;
         	}
         }
         
       
    } 
    return 0; 
    } 