#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    
    while (t--) {
        int i, n, x;
        int maximum = 0, f = 0;
        cin >> n;
        vector<int> v(101, 0);
        
        for (i = 0; i < n; i++) {
            cin >> x;
            maximum = max(maximum, x);
            v[x]++;
        }
        
        for (i = 1; i <= maximum; i++) {
            if (v[i - 1] < v[i]) {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }
        
        if (f == 0) {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
