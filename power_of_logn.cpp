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


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test = 1;
    //cin >> test;
    while (test--) {
        int a;
        cin >> a;

        int p;
        cin >> p;

        int j = 0;
        int ans = 1;
        while (p > 0)
        {
            int last_bit = p & 1;
            p = p >> 1;
            if (last_bit == 1)
            {
                ans = ans * a;
            }
            a = a * a;
        }

        cout << ans << endl;







    }
    return 0;
}