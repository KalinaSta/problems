//Kalina Staszewska

#include <bits/stdc++.h>
using namespace std;

const int MAXH = 5e5+7;
int w1[MAXH], w2[MAXH], w[MAXH];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin >> n >> h;

    for(int i=1; i<=n; i++) {
        int a;
        cin >> a;
        if(i%2==1) {
            w1[1]++;
            w1[a+1]--;
        }
        else {
            w2[h]++;
            w2[h-a]--;
        }
    }

    for(int i=1; i<=h; i++) {
        w1[i] += w1[i-1];
    }
    for(int i=h; i>=1; i--) {
        w2[i] += w2[i+1];
    }

    for(int i=1; i<=h; i++) {
        w[i] = w1[i]+w2[i];
    }

    int minimum = 1e9;
    for(int i=1; i<=h; i++) {
        minimum = min(minimum, w[i]);
    }

    int ile = 0;

    for(int i=1; i<=h; i++) {
        if(w[i]==minimum) {
            ile++;
        }
    }

    cout << minimum << " " << ile << "\n";

    return 0;
}
