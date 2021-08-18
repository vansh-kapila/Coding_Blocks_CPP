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
         int x ; 
         cin>>x;
         cout<<&x+1<<" "<<&x+2<<" "<<&x+3<<endl;
         int y;
         cin>>y;
         cout<<&y<<endl;
         char ch;
         cin>>ch;
         cout<<(void *)&ch<<endl;
         
       
    } 
    return 0; 
    } 