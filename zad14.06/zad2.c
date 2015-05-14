#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int rank, n;
    cout << "Podaj rank: ";
    cin >> rank;
    
    cout << "Podaj n: ";
    cin >> n;

    int b[n+1];
    for(int i = 0; i <= n; i++) {
        b[i] = 0;   
    }
    
    int i = 0;
    while (rank) {
        b[i] = rank % 2 ? 1 : 0;
        rank /=2 ;
        i++;
    }
    
    cout << "{ ";
    
    for(i = 0; i < n; i++) {
           if (((b[i] + b[i+1]) % 2) == 1) {
                cout << i + 1 << " ";   
           }
    }
    
    cout << "}" << endl;
    return 0;
}