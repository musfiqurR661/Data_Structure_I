#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int ways = 0;
        int cost = 1;
        while (cost <= n) {
            ways++;
            cost *= 2;
        }

        cout << ways << endl;
    }

    return 0;
}
