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
         int arr[2*n];
         for (int i = 0; i < 2*n; ++i)
         {
         	cin >>arr[i];
         }

         sort(arr,arr+2*n);
         int count=0;
         int k = 2*n-1;
         for(int i=0;i<n;i++)
         {
         	if(arr[i]+arr[k]==arr[i+1]+arr[k-1])
         	{
         		count++;
         		k--;
         	}

         	else
         	{
         		break;
         	}
         }

         if(count==n)
         {
         	cout<<"PERFECT"<<endl;
         }
         else
         {
         	cout<<"IMBALANCED"<<endl;
         }


         
       
    } 
    return 0; 
    } 