#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Buoc 0: " << a[0] << "\n";

    for (int i = 1; i < n; i++) {
        int x = a[i];
        int pos = i;
        while (pos > 0 && a[pos - 1] > x) {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = x;

        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++) cout << a[j] << " ";
        cout << "\n";
    }

    return 0;
}
