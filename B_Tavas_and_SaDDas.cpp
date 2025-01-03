//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
//st.find_by_order(x) || st.order_of_key(x)
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
#define inNvec inputn;vl arr(n);civ(arr);

 unordered_map <int,int> mp;
void solve()
{
    string s;
    cin>>s;
    /*
    100 -- 0 000 
    111 -- 1 001
    ---
    101100 -- 2 010
    101111 -- 3
    1001010 -- 4
    1001101 -- 5
    ----
    110111100 -- 6
    110111111 
    111011010
    111011101
    1011101000
    1011101011
    1100000110
    1100001001


    2 - 1,2
    3 - 3,6
    4 - 7,14
    number ki range decide hoti hai length se jisme power of 2 add hori hai
    agar 4 hai toh first half mei, nai toh 7 hai toh second half me & so on
    */
    int ul = mp[s.length()];   //upper limit
    int llm = mp[s.length()-1] + 1; //lower limit
    for(auto ch : s)
    {
        int mid = (ul+llm)/2;

        if(ch == '4')
            ul = mid - 1;
        else
            llm = mid + 1;
    }
    cout<<llm;
    eline;
}

int main()
{
  //fast;
  int t = 1;
//   cin>>t;
    int f = 2;
    mp[0] = 0;
    for(int i=1;i<11;i++)
    {
        mp[i] = f + mp[i-1];
        f = f * 2;
    }
  while(t--){
    solve();
  }
   return 0;
}