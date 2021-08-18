 /* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/

#include <bits/stdc++.h> 
#define pb(x) push_back(x) 
#define all(x) x.begin(), x.end() 
#define debug(x) cout << '>' << #x << ':' << x << endl; 
#define int long long 
#define ld long double 
#define endl "\n"; 

#define f(a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i>b;i--)

const int mod = 1000000007; 
using namespace std; 
  
  
int32_t main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int test; 
    cin>>test; 
    while(test--){ 
         int n,k;
         cin>>n>>k;

         f(0,n)
         {
         	cin>>arr[i];
         }

         int l=0;
         int r=n-1;

         int pre[n+1];
         pre[0]=0;
         pre[1]=arr[0];

         f(2,n+1)
         {
         	pre[i]=pre[i-1]+arr[i-1];
         }

         while(l<=r)
         {
              int mid = (l+r)>>1;

              if(books())
         }
         
       
    } 
    return 0; 
    } 