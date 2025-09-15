#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
      string s1 , s2 ; cin >> s1 >> s2;
      string res1 = s1 + s2 ;
      string res2 = s2 + s1;
      if (res1 != res2 ) cout<<"";
      else {
            ll k1 = s1.size();
            ll k2 = s2.size();
            ll bien = __gcd(k1,k2);
            cout<<s1.substr(0,bien);
      }

}
