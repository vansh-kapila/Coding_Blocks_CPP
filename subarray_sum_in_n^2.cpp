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

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


        int sum[n + 1];
        sum[0] = 0;
        sum[1] = arr[0];
        for (int i = 2; i < n + 1; i++)
        {
            sum[i] = sum[i - 1] + arr[i - 1];

        }
        int ans = -10000000007;
        for (int i = 0; i < n + 1 ; i++)
        {

            for (int j = i + 1; j < n + 1; j++)
            {
                ans = max(ans , sum[j] - sum[i]);
            }
        }

        cout << ans << endl;
    }
    return 0;

}
