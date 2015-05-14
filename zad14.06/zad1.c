#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, wejscie=1;
    cout << "n = ";
    cin >> n;
    int a[n];
    
    for (int i=0; i < n; i++) {
        a[i] = 0;   
    }
    
    while (wejscie != 0) {
        
        cout << "Podaj kolejny wyraz (0 przerywa wpisywanie): ";
        cin >> wejscie;
        
        if ((wejscie > n) || (wejscie < 0)) {
            cout << "Zly zakres" << endl;   
        }
        else {
            a[wejscie - 1] = 1;
        }
    }
    
    int b = 0;
    int rank = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        b = (b + a[i]) % 2;
        if (b == 1) rank += (1 << i);
    }
    
    cout << rank << endl;
    
    return 0;
}