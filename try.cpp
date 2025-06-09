
#include <bits/stdc++.h>
using namespace std;


#define ll int64_t

int fn(int ind,int target,vector<vector<int>> &dp,vector<int> &arr){
    if(target == 0)
        return 1;
    if(ind >= arr.size())
        return 0;

    if(dp[ind][target]!=-1)
        return dp[ind][target];

    int take = 0;
    if(target - arr[ind] >= 0)
        take = fn(ind+1,target-arr[ind],dp,arr);
    int notTake = fn(ind+1,target,dp,arr);

    return dp[ind][target] = min(take+notTake,1);
}

vector<vector<int>> subset_queries(vector<int> &arr, vector<int> &queries) {
    // Write code here.
    int n = arr.size();
    int q = queries.size();
    int maxm = *max_element(queries.begin(),queries.end());
    vector <vector<int>> dp(n+1,vector<int>(maxm+2,-1));

            // int x = fn(0,maxm,dp,arr);
    

    for(auto qt : queries){
        if(fn(0,qt,dp,arr)){
            // printAns(q,dp,arr);
            cout<<1<<endl;
            // continue;
            }
        else
            cout<<-1<<endl;
    }
               for(int i=0;i<=n;i++){
                for(int j=0;j<=maxm+1;j++){
                    cout<<dp[i][j]<<"\t";
                }
                cout<<endl;
               }

    return {};
}


void solve() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)cin >> arr[i];
    vector<int> queries(Q);
    for (int i = 0; i < Q; i++)cin >> queries[i];
    auto ans = subset_queries(arr, queries);

    // checker.
    if (ans.size() != Q) {
        cout << 101 << endl;
        return;
    }
    for (int i = 0; i < Q; i++) {
        auto x = ans[i];
        if (x.size() == 0) {
            cout << 101 << endl;
            continue;
        }
        if (x.size() == 1 && x[0] == -1) {
            cout << -1 << endl;
            continue;
        }
        ll sum = 0, p = -10;
        for (auto y : x) {
            if (y < 0 || y >= N || p >= y ) { // valid 0-indexed.
                sum = -1111;
                break;
            }
            p = y;
            sum += arr[y];
        }
        if (sum == queries[i]) {
            cout << 1 << endl;
        }
        else cout << 101 << endl;
    }
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

#ifdef Mastermind_
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // int i = 1;
    // cin >> t;
    while (t--) {
        // cout << "Case #" << i << ": ";
        solve();
        // i++;
    }
    return 0;
}
