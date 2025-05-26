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
#define usi unordered_set<int>
#define usll unordered_set<long long>
#define si set<int>
#define sll set<long long>
#define umii unordered_map<int,int>
#define mii map<int,int>
#define umll unordered_map<long long,long long>
#define mll map<long long,long long>
#define forn(s, n) for(auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define con continue
#define eline cout << "\n"
#define coutvec(arr) for(auto i = 0; i < arr.size(); i++) cout << arr[i] << " "
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int,int>>
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(), x.end()

void solve() {
    ll n;
    cin >> n;
    vl arr(n);
    civ(arr);
    int ct = 0;
    for(auto it : arr)
    {
        if(it == 0)
            ct++;
    }
    if(ct ==0)
    {
        cout<<1;
        eline;
        cout<<1<<" "<<n;
        eline;
    } 
    else if(ct == n)
    {
        if(n%2==0)
        {
            cout<<3<<endl;
            cout<<1<<" "<<n/2;
            eline;
            cout<<2<<" "<<n-n/2+1;
            eline;
            cout<<1<<" "<<2;
            eline;
        }
        else
        {
            cout<<3<<endl;
            cout<<1<<" "<<n/2+1;
            eline;
            cout<<2<<" "<<n-n/2;
            eline;
            cout<<1<<" "<<2;
            eline;
        }
    }
    else if(arr[0]!= 0)
    {
        cout<<2;
        eline;
        cout<<2<<" "<<n;
        eline;
        cout<<1<<" "<<2;
        eline;
    }
    else if(arr[n-1] != 0)
    {
        
        cout<<2;
        eline;
        cout<<1<<" "<<n-1;
        eline;
        cout<<1<<" "<<2;
        eline;
    }
    else
    {
        int ind;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != 0)
                ind = i;
        }
        if(ind < (n-ind-1))
        {
            cout<<3;
            eline;
            cout<<1<<" "<<ind+1;
            eline;
            cout<<2<<" "<<n-ind;
            eline;
            cout<<1<<" "<<2;
            eline;
        }
        else if(ind > (n-ind-1))
        {
            cout<<3;
            eline;
            cout<<1<<" "<<ind;
            eline;
            cout<<2<<" "<<n-ind+1;
            eline;
            cout<<1<<" "<<2;
            eline;  
        }
        else
        {
            cout<<3;
            eline;
            cout<<1<<" "<<ind;
            eline;
            cout<<2<<" "<<n-ind+1;
            eline;
            cout<<1<<" "<<2;
            eline;
        }
    }   
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
