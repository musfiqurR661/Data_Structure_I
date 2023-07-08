
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  
    int n,k,q;
    
    cin>>n>>k>>q;
    
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    
    ll v = 0;
    int c = 0;

    for (int t : a) {
        if (t <= q) {
            c++;
        } else {
            c = 0;
        }

        if (c >= k) {
            v += c - k + 1;
        }
    }

    cout<< v <<endl;
    
   
    
    
}

int main()
{
    
    ll tt;
    cin>>tt;
    while(tt--)
    {
        solve();
    }
   
    return 0;
}