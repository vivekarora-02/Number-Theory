
void eulersTotiensFunction(ll n) {


      ll a[n];
      for (ll i = 1; i <= n; ++i) {
            a[i] = i;
      }

      //Same Logic Of Sieve.

      for (ll i = 2; i <= n; ++i) {
            if (a[i] == i) {
                  a[i] = i - 1;
                  for (ll j = 2 * i; j <= n; j += i) {
                        a[j] = a[j] * (i - 1) / i;
                  }
            }
      }
      cout << "Corrosponding value of eulers totiens function: " << nline;
      for (ll i = 1; i <= n; ++i) {
            cout << a[i] << " ";
      }

}
