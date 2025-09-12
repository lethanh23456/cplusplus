#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n , k ;
ll a[100] ;
void out(){
    for (ll i = 1; i <= k ; i++){
        cout << a[i] << " " ;
    }
    cout << endl ;
}
void Try(ll i) {
    for (ll j = n - k + i  ; j >= a[i-1] + 1 ; j--){
        a[i] = j ;
        if ( i == k ) out();
        else Try(i+1);
    }

}
int main(){
    ll t ; cin >> t ;
    while(t--){
        cin >> n ; cin >> k ;
        Try(1);
    }
}