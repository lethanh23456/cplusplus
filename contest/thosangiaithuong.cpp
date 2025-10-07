#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
      ll a1 , a2, a3, b1 , b2 , b3 , n ;
      cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n ;
      ll cup = a1 + a2 + a3 ;
      ll chungchi = b1 + b2 + b3 ;
      ll ok = 1 ;
      for(ll i = 0 ; i <= n ; i++){
            if ((i*7 < cup) || (n-i)*12 < chungchi ) {
                        ok = 0 ;
            }
            else if ((i*7 >= cup) && ((n-i)*12 >= chungchi)) {
                  ok = 1 ;
                  break;
            }
      }
      if (ok) cout<<"YES";
      else cout<<"NO";


}

