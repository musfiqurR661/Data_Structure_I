#include <iostream>
using namespace std;

int main()
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
        else
        {
            result = min(n, g / 2) * k;
        }

        cout << result << endl;
    }

    return 0;
}
