//Kalina Staszewska

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+7;
bool tab[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, m, h, ostatnia = 0, i;
    cin >> n >> m;

    for(i=1; i<=n; i++) {
        cin >> h;
        tab[i] = h>=m;
    }
    m = 0;
    for(i=1; i<=n; i++) {
        ostatnia = max(ostatnia, i*tab[i]);
        m += ostatnia;
    }
    cout << m << "\n";

    return 0;
}
