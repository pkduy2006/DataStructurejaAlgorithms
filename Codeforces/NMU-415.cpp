#include <bits/stdc++.h>
#define int long long
#define double long double
#define float long double
using namespace std;

const int N = 2e5 + 7;
int n, m, x[N], r[N], ntests;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        cin >> n >> m;
        for(int i = 1; i <= n; i++) 
            cin >> x[i];
        for(int i = 1; i <= n; i++) 
            cin >> r[i];
        
        map<int, int> mp;
        int res = 0;
        for(int i = 1; i <= n; i++) {
            for(int a = x[i] - r[i]; a <= x[i] + r[i]; a++) {
                int tmp = 2 * floor(sqrt(r[i] * r[i] - (a - x[i]) * (a - x[i]))) + 1;
                mp[a] = max(mp[a], tmp);
            }
        }
        for(auto it : mp) {
            //cout << it.second << ' ';
            res += it.second;
        }
        cout << res << '\n';
    }

    return 0;
}