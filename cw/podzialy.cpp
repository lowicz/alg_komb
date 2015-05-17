/*******************************
 * DZIAŁA
 ******************************/
 
#include <iostream>
#include <algorithm>

using namespace std;

void wypisz (int f1[], int n) {
    for(int i = 1; i <= f1[n]; i++) {
        cout << "{ ";
        for(int j = 1; j <= n; j++) {
            if (f1[j] == i) {
                cout << j << " ";   
            }         
        }
        cout << "}" << endl;
    }
    cout<< "-----------------" << endl;
}

void rgf(int n) {

    int f1[n+1];
    int f2[n+1];
    
    for(int i = 1; i <= n; i++) {
        f1[i] = 1;
        f2[i] = 2;
    }
    
    wypisz(f1,n);
    
    int j;
    while (f1[n] != n) {
        j = n;
        while (f1[j] == f2[j]) {
            j--;
        }
        f1[j]++;
        
        for(int i = j+1; i <= n+1; i++) {
            f1[i] = 1;
            if (f1[j] == f2[j]) {
                f2[i] = f2[j] + 1;
            } 
            else {
                f2[i] = f2[j];
            }
        }
        
        wypisz(f1, n);
        
        cout << endl;   
     }
}


int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;

    rgf(n);

    return 0;
}
