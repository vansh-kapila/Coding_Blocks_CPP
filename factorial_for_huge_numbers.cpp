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

    int test = 1;
    //cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[2000] = {0};
        arr[1999] = 1;

        for (int i = 2; i <= n; i++)
        {
            for (int j = 1999; j >=0; j--)
            {   if (j < 1999)
                {
                    arr[j] = arr[j] * i + arr[j + 1] / 10;
                    arr[j + 1] = arr[j + 1] % 10;
                }
                else
                {
                    arr[j] = arr[j] * i;
                }
            }
        }

        bool found = false;
        for (int j = 0; j < 2000; j++)
        {   if (arr[j] > 0 or found == true)
            {   found = true;
                cout << arr[j];
            }
        }
    }
    return 0;
}