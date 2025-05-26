//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define vl vector<long long>
#define usi unordered_set <int>
#define usll unordered_set <long long>
#define si set<int>
#define sll set<long long>
#define umii unordered_map <int,int>
#define mii map<int,int>
#define umll unordered_map <long long,long long>
#define mll map<long long,long long>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define con continue
#define eline cout<<"\n"
#define coutvec(arr) for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap priority_queue <int> 
#define minheap priority_queue <int,vector<int>,greater<int>>
#define ppi pair<int,pair<int,int>>
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(),x.end()

void solve()
{
    ll n;
    cin>>n;
    vl arr(n);
    civ(arr);

    vector <ll> ct(32,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(arr[i] & (1LL << j))
                ct[j]++;
        }
    }
    ll max_sum = 0;

    for(int i=0;i<n;i++)
    {
        ll curr_sum = 0;
        for(int j=0;j<32;j++)
        {
            ll bit_val = (1LL << j);
            if(arr[i] & bit_val)
                curr_sum += (n - ct[j]) * bit_val;
            else
                curr_sum += ct[j] * bit_val;
        }
        max_sum = max(max_sum, curr_sum);
    }
    cout<<max_sum;
    eline;
}

int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
