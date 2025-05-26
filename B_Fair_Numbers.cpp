//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i = 0; i < v.size(); i++) cin >> v[i]
#define vi vector<int>
#define vl vector<long long>
#define forn(s, n) for(auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define eline cout << "\n"
#define coutvec(arr) for(auto i = 0; i < arr.size(); i++) cout << arr[i] << " "
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int, int>>
#define pii pair<int, int>
#define pb emplace_back
#define all(x) x.begin(), x.end()

bool checkDiv(ll i, ll no)
{
    if (i == 1) return true;
    if (i == 2) return no % 10 % 2 == 0;
    if (i == 3) {
        ll sum = 0, temp = no;
        while (temp) sum += temp % 10, temp /= 10;
        return sum % 3 == 0;
    }
    if (i == 4) return (no % 100) % 4 == 0;
    if (i == 5) return no % 10 == 0 || no % 10 == 5;
    if (i == 6) return checkDiv(2, no) && checkDiv(3, no);
    if (i == 7) {
        ll temp = no;
        while (temp >= 100) temp = temp / 10 - 2 * (temp % 10);
        return temp % 7 == 0;
    }
    if (i == 8) return (no % 1000) % 8 == 0;
    if (i == 9) {
        ll sum = 0, temp = no;
        while (temp) sum += temp % 10, temp /= 10;
        return sum % 9 == 0;
    }
    return false;
}

bool check(ll ans)
{
    vector<int> div(10, 0);
    ll temp = ans;

    while (temp) {
        div[temp % 10]++;
        temp /= 10;
    }

    for (int i = 1; i < 10; i++)
        if (div[i] && !checkDiv(i, ans))
            return false;

    return true;
}

void solve() 
{   
    ll n;
    cin >> n;

    for(ll i=n;i<=1e18;i++)
    {
        if(check(i))
        {
            cout<<i;
            eline;
            return;
        }
    }
    return;
}

int main() 
{
    //fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
