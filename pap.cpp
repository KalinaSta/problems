//Kalina Staszewska

#include <bits/stdc++.h>
using namespace std;

const int MAXK = 15;
int tab[MAXK];

int main() {
    int k;
    cin >> k;

    k++;
    for(int i=1; i<=k; i++) {
        cin >> tab[i];
    }

    long long suma = 0;
    int potega = 1;

    for(int i=1; i<=k; i++) {
        if(suma+1<potega) {
            cout << suma+1 << "\n";
            return 0;
        }
        suma += tab[i]*potega;
        potega *= 2;
    }

    cout << suma+1 << "\n";

    return 0;
}
