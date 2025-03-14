#include <bits/stdc++.h>
using namespace std;

int ntests;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        
        if(l == r && r == d && d == u) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}