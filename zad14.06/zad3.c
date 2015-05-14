#include <stdio.h>
#include <iostream>

using namespace std;

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
    int i = k;

    while((i > 0) && (t[i] == n-k+i)) {
        i--;   
    }
    
    if (i==0) {
        cout << "Null" << endl;   
    }
    else {
        t[i]++;
        int licznik = 1;
        for (int j = i+1; j <=k; j++) {
            t[j] = t[i] + licznik;
            licznik++;
        }
            cout << "{ ";
            for(int i = 1; i <= k; i++) {
                cout << t[i] << " ";
            }
            cout << "}" << endl;
    }   
    
    return 0;
}