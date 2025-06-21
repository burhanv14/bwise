//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define usi               unordered_set <int>
#define usll              unordered_set <long long>
#define si                set<int>
#define sll               set<long long>
#define umii              unordered_map <int,int>
#define mii               map<int,int>
#define umll              unordered_map <long long,long long>
#define mll               map<long long,long long>
#define forn(s,n)         for(auto i=s;i<n;i++)
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define con               continue
#define eline             cout<<"\n"
#define coutvec(arr)      for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap           priority_queue <int> 
#define minheap           priority_queue <int,vector<int>,greater<int>>
#define ppi               pair<int,pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(),x.end()

void solve(){
    int l[3], b[3];
    cin>>l[0]>>b[0]>>l[1]>>b[1]>>l[2]>>b[2];
    int A = l[0]*b[0] + l[1]*b[1] + l[2]*b[2];
    int S = round(sqrt(A));
    if (S*S != A)
    { no; 
        return; 
    }
    bool ok = false;
    if (b[0]==S && b[1]==S && b[2]==S && l[0]+l[1]+l[2]==S) ok = true;
    if (l[0]==S && l[1]==S && l[2]==S && b[0]+b[1]+b[2]==S) ok = true;
    for(int i=0; i<3; i++) for(int j=i+1; j<3; j++){
        int k = 3 - (i + j);
        if (b[i]==b[j] && b[i]<S && l[i]+l[j]==S && l[k]==S && b[k]==S-b[i]) ok = true;
        if (l[i]==l[j] && l[i]<S && b[i]+b[j]==S && b[k]==S && l[k]==S-l[i]) ok = true;
    }
    ok ? yes : no;
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
