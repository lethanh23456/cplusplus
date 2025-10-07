#include<bits/stdc++.h>
using namespace std;

int main() {
    int a , b , c ;
    cin >> a >> b >> c;
    int kc1 = abs(a - b) ;
    int res = c + kc1;
     if (a > n || b > n || c > n || kc1 == 0) {
        cout << -1;
        return 0;
    }
    else if (kc1 == 0) cout<<-1;
    else cout<< res;
}
