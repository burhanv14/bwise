//Code by Burhanuddin Vora
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define vl vector<long long>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define con continue
#define eline cout<<endl
#define coutvec(arr,j,n) for(int i=j;i<n;i++) cout<<arr[i]<<" "

int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
 ll n, k;
    cin >> n >> k;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll curr = 1, total = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= k)
            curr++;
        else
        {
            total = max(total, curr);
            curr = 1;
        }
    }

    total = max(total, curr);

    cout << n - total;
    eline;
   }
    return 0;
}