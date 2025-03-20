#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5 + 7;
int ntests, n, res[N];

bool check(int x) {
    int tmp = sqrt(x * (x + 1) / 2);
    return tmp * tmp == x * (x + 1) / 2;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        cin >> n;

        if(check(n))
            cout << -1 << '\n';
        else {
            for(int i = 1; i <= n; i++)
                res[i] = i;
            for(int i = 1; i < n; i++) {
                int tmp = sqrt(i * (i + 1) / 2);
                if(tmp * tmp == i * (i + 1) / 2) 
                    swap(res[i], res[i + 1]);
            }
            for(int i = 1; i <= n; i++)
                cout << res[i] << ' ';
            cout << '\n';
        }
    }

    return 0;
}