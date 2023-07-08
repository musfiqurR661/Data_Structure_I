#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool func(ll x, vector<ll> &arr)
{
    ll count = 1, maxm = arr[0], minm = arr[0];
    for (ll i = 1; i < arr.size(); i++)
    {
        maxm = arr[i];
        if (((maxm - minm + 1) / 2) > x)
        {
            count++;
            minm = arr[i];
        }
    }
    if (count > 3)
        return false;
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll low = 0, high = 1e9, ans = 1e9;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            if (func(mid, arr))
            {
                ans = mid, high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}