#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000002];
int main() {
      ll n ; cin >> n ;
      map<ll , ll > mp;
      for (ll i = 1 ; i <= n ; i++){
            cin >> a[i];
            mp[a[i]] = i ;
      }
      ll res = 1 ;
      ll ans = 1 ;
      for (ll i = 2 ; i <= n ; i++){
            if(mp[i] > mp[i-1]){
                  res++;
            }
            else {
                  res = 1 ;
            }
            ans = max(ans,res) ;
      }
      cout<<n-ans;

}
