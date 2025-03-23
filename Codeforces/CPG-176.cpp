#include <bits/stdc++.h>
using namespace std;

int ntests, n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        cin >> n >> k;

        if(k % 2 == 0) {
            for(int i = 1; i <= n - 2; i++)
                cout << n - 1 << ' ';
            cout << n << ' ' << n - 1 << '\n';
        } else {
            for(int i = 1; i <= n - 1; i++) 
                cout << n << ' ';
            cout << n - 1 << '\n';
        }
    }

    return 0;
}