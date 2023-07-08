#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, g;
        cin >> n >> k >> g;
        
        int result = 0;
        
        if (k == 0)
        {
            result = 0;
        }
        else if (g % 2 == 0)
        {
            result = k * g - (((g / 2) - 1) * n);
        }
        else
        {
            result = k * g - (((g + 1) / 2 - 1) * n);
        }
        
        cout << result << endl;
    }

    return 0;
}
