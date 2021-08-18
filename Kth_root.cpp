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


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test;
    while (test--) {
        double n, k;
        cin >> n >> k;

        int r = n;
        int l = 1;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (pow(mid, k) == n)
            {
                ans = mid + 1;
                break;
            }

            else if (pow(mid, k) < n)
            {
                l = mid;
                ans = mid;
            }

            else
            {
                r = mid - 1;
                ans = mid;
            }
        }

        int x = 1;
        ans--;
        cout << max(x, ans) << endl;



    }
    return 0;
}