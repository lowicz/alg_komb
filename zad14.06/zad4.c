#include <stdio.h>
#include <iostream>

using namespace std;

int silnia(int n) {
    if (n == 0) return 1;
    return (n * silnia(n-1));
}

int newton(int n, int k) {
    return silnia(n) / (silnia(k) * silnia(n-k));
}

int main()
{
    int n, k;
    cout << "Podaj n: ";
    cin >> n;
    
    cout << "Podaj k: ";
    cin >> k;
    
    int t[k+1];
    for (int i = 1; i <= k; i++) {
        cout << "Podaj kolejny element podzbioru: ";
        cin >> t[i];
    }
    t[0] = 0;
    int rank = 0;
    for (int i = 1; i <= k; i++) {
        for(int j = t[i-1]+1; j<= t[i] - 1; j++) {
            rank += newton(n-j, k-i);
        }
    }

    cout << "Rank: " << rank << endl;
 
    
    return 0;
}