#include <bits/stdc++.h>
using namespace std;

const int N = 506;
const int M = 1e5 + 7;
const int INF = 1e9 + 7;
int n, m, a[N][N];
long long res = INF;
vector<int> prime;
bool mark[M];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    }

    mark[1] = mark[0] = true;
    for(int i = 2; i <= sqrt((int)1e5 + 3); i++) {
        if(!mark[i]) {
            for(int j = i * i; j <= 1e5 + 3; j += i)
                mark[j] = true;
        }
    }
    for(int i = 2; i <= 1e5 + 3; i++) {
        if(!mark[i])
            prime.push_back(i);
    }

    for(int i = 1; i <= n; i++) {
        long long val = 0;
        for(int j = 1; j <= m; j++) {
            if(mark[a[i][j]]) 
                val += *upper_bound(prime.begin(), prime.end(), a[i][j]) - a[i][j];
        }
        res = min(res, val);
    }
    for(int i = 1; i <= m; i++) {
        long long val = 0;
        for(int j = 1; j <= n; j++) {
            if(mark[a[j][i]])
                val += *upper_bound(prime.begin(), prime.end(), a[j][i]) - a[j][i];
        }
        res = min(res, val);
    }

    cout << res << '\n';

    return 0;
}