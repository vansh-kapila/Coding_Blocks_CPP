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

   int a,b;
   cin>>a>>b;
  for(int i=0;i<1000000;i++)
  {
  	int x = a^i;
  	if(x==b)
  	{
  		cout<<i<<endl;
  		break;
  	}
  }

         //ac 
         
       
    
    return 0; 
    } 