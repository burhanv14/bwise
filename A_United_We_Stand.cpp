#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    if (arr.back() == arr[0])
    {
        cout << -1 << nline;
        return;
    }
    else
    {
        ll itr = 0;
        while (arr[itr] == arr[0])
            itr++;

        cout << itr << " " << n - itr << nline;
        for (int i = 0; i < itr; i++)
            cout << arr[i] << " ";
        cout << nline;
        for (int i = itr; i < n; i++)
            cout << arr[i] << " ";
        cout << nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}