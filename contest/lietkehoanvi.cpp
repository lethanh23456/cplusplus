#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n; 
ll a[100]; 
ll check[100]; 
ll k = 1;
void out(){
    cout << k << ": ";
    for (ll i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    k++;
}

void Try(ll i){
    for (ll j = 1; j <= n; j++){   
        if (check[j] == 0){
            a[i] = j;
            check[j] = 1;
            if (i == n) out();
            else Try(i + 1);
            check[j] = 0; 
        }
    }
}

int main() {
    cin >> n;
    Try(1); 
}
