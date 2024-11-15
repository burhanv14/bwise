//Code by Burhanuddin Vora - 22ucc123@lnmiit.ac.in
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
#define inputn ll n;cin>>n;
#define maxheap priority_queue <int> 
#define minheap priority_queue <int,vector<int>,greater<int>>
#define ppi pair<int,pair<int,int>>

void solve()
{
    inputn;
		vl a(n);
		civ(a);
    ll ans = 0;
		for(int i = n - 2; i >= 0; --i){
			while(a[i] > 0 && a[i] >= a[i + 1]){
				a[i] /= 2;
				++ans;
			}
		}
		for(int i = 0; i < n - 1; ++i) if(a[i] >= a[i + 1]){ans = -1; break;}
		cout << ans;
    eline;

}

int main()
{
  //fast;
  int t = 1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}



