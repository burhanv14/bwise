// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
// st.find_by_order(x) || st.order_of_key(x)
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;

#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define usi               unordered_set<int>
#define usll              unordered_set<long long>
#define si                set<int>
#define sll               set<long long>
#define umii              unordered_map<int,int>
#define mii               map<int,int>
#define umll              unordered_map<long long,long long>
#define mll               map<long long,long long>
#define forn(s,n)         for(auto i=s;i<n;i++)
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define con               continue
#define eline             cout<<"\n"
#define coutvec(arr)      for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap           priority_queue<int> 
#define minheap           priority_queue<int,vector<int>,greater<int>>
#define ppi               pair<int,pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(),x.end()

bool check(int h, vi &a, int w) {
    vector<int> freq(32, 0);
    
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < 32; j++) {
            if(a[i] & (1 << j)) {
                freq[j]++;
                break;
            }
        }
    }

    for(int i = 0; i < h; i++) {
        int cur = w;
        for(int j = 31; j >= 0; j--) {
            if(cur <= 0)    break;
            if(freq[j] > 0) {
                int cur_no = (1 << j);
                int tot = cur / cur_no;
                int use = min(freq[j], tot);
                cur -= use * cur_no;
                freq[j] -= use;
            }
        }
    }

    forn(0,32){
        if(freq[i] > 0) return false;
    }
    return true;
}

void solve() {
    int n, w;
    cin >> n >> w;
    vi a(n);
    civ(a);

    int low = 1, high = n, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (check(mid, a, w)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
