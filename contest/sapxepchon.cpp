#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ll n; cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (ll i = 1; i < n; i++) {
        auto it = min_element(a.begin() + i, a.begin() + n + 1);
        swap(a[i], *it);

        cout << "Buoc " << i << ": ";
        for (ll j = 1; j <= n; j++) cout << a[j] << " ";
        cout << "\n";
    }
}
