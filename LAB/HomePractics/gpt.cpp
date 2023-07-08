#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int result;
    int l = 0, h = n - 1;
    while (l <= h) // Changed the condition to l <= h to handle edge cases
    {
        int mid = (h + l) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            result = mid;
            h = mid - 1;
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // Removed the semicolon here
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    cout << binarySearch(arr, n, k) << endl;
    return 0;
}
