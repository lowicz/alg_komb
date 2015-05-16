#include <iostream>
#include <math.h>

using namespace std;


int stirling(int n, int k) {
    int s[n+1][k+1];
    
     for (int j=0; j <= k; j++) {
        for(int i=0; i <=n; i++) {
            s[i][j] = 0;
        }
    }
    
    s[0][0] = 1;  
   
    
    for (int j=1; j <= k; j++) {
        for(int i=1; i <=n; i++) {
            
            s[i][j] = s[i-1][j-1] - (i-1)*s[i-1][j];
        }
    }
    
    return s[n][k];
}

int main()
{
    int n, k;
    cout << "Podaj n: ";
    cin >> n;
    
    cout << "Podaj k: ";
    cin >> k;
    
    
    
    cout << stirling(n,k) << endl;    
    return 0;
}
