#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void robotArrangement(int t, vector<pair<int, vector<int>>>& testCases) {
    for (int i = 0; i < t; i++) {
        int n = testCases[i].first;
        vector<int>& counts = testCases[i].second;

        int maxCounts = *max_element(counts.begin(), counts.end());
        vector<int> line(maxCounts + 1, 0);

        for (int count : counts) {
            line[count]++;
        }

        line.back() = 1;
        for (int i = maxCounts - 1; i >= 0; i--) {
            line[i] += line[i + 1];
        }

        bool valid = true;
        for (int i = 0; i < n; i++) {
            int count = counts[i];
            if (line[count + 1] > 0) {
                line[count + 1]--;
            } else {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, vector<int>>> testCases(t);
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> counts(n);
        for (int j = 0; j < n; j++) {
            cin >> counts[j];
        }

        testCases[i] = make_pair(n, counts);
    }

    robotArrangement(t, testCases);

    return 0;
}
