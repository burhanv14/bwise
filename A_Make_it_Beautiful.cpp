//Code by Burhanuddin Vora
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
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
    int n;
    cin>>n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    swap(arr[0], arr[1]);
    swap(arr[n - 1], arr[0]);

    if (arr[0] == arr[1])
        cout << "NO\n";
    else {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
       eline;
    }
   }
    return 0;
}
