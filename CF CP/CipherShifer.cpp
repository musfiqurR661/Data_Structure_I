#include <iostream>
using namespace std;

void Cipher() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int i = 0;

    while (i < n) {
        ans += s[i];
        int j = i + 1;
        while (j < n && s[i] == s[j]) {
            j++;
        }
        i = j;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Cipher();
    }

    return 0;
}
