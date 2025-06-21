// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vi vector<int>
#define forn(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define eline cout << "\n"
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;
    vector <vector<int>> a(n,vector<int>(n));

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            a[i][j] = s[j]-'0';
        }
    }
    int ans = 0;

    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int x1 = i, y1 = j;
            int x2 = j, y2 = n - 1 - i;
            int x3 = n - 1 - i, y3 = n - 1 - j;
            int x4 = n - 1 - j, y4 = i;

            int cnt1 = 0;
            cnt1 += a[x1][y1];
            cnt1 += a[x2][y2];
            cnt1 += a[x3][y3];
            cnt1 += a[x4][y4];
            // cout<<x1<<" "<<y1<<endl;
            // cout<<x2<<" "<<y2<<endl;
            // cout<<x3<<" "<<y3<<endl;
            // cout<<x4<<" "<<y4<<endl;
            ans += min(cnt1, 4 - cnt1);
        }
    }

    cout << ans << '\n';
}

int main() {
    //fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}