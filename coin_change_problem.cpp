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
        int arr[] = {1, 2, 5, 10, 20, 50, 100, 200};

        while (n > 0)
        {   int x = lower_bound(arr, arr + 8, n + 1) - arr;
            cout << arr[x - 1] << endl;
            n = n - arr[x - 1];
        }



    }
    return 0;
}