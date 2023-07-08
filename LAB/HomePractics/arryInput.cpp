#include<bits/stdc++.h>
using namespace std;

void arrayScan(int A[], int n)
{
    for(int i=0; i<n; cin >> A[i++]);
}

void printArray(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(i != n-1) cout << A[i] << " ";
        else cout << A[i] << endl;
    }
}

int bubbleSort(int A[], int n)
{
    int counter =0;
    int flag = 1;
    for(int i=0; i<n-1; i++)
    {
        if(flag == 0)break;
        flag = 0;

        for(int j=0; j<(n-i-1); j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

                flag = 1;
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int n; cin >> n;
    int A[n]; arrayScan(A, n);

    int c = bubbleSort(A, n);
    printArray(A, n);
    cout << c << endl;

    return 0;
}
