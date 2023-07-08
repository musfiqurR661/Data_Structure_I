#include <iostream>
#include <vector>
using namespace std;

void countWays(int n, int k, int cost, int& ways) {
    if (cost > n)
        return;

    ways++;

    for (int i = 0; i < k; i++) {
        cost *= 2;
        countWays(n, k, cost, ways);
        cost /= 2;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int ways = 0;
        countWays(n, k, 1, ways);

        cout << ways << endl;
    }

    return 0;
}
