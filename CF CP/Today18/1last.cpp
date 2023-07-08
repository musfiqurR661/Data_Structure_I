#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int i, n, x;
        int maxFrequency = 0, flag = 0;
        cin >> n;
        vector<int> frequencies(101, 0);
        
        for (i = 0; i < n; i++) {
           cin >> x;
           maxFrequency = max(maxFrequency, x);
           frequencies[x]++;
        }
        
        for (i = 1; i <= maxFrequency; i++) {
            if (frequencies[i-1] < frequencies[i]) {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
