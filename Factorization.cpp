
// Factorization

vector<ll> trial_division1(ll n) {

      vector<ll> factorzation;

      for (ll i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                  factorzation.pb(i);
                  n /= i;
            }
      }

      if (n > 1) {
            factorzation.pb(n);
      }

      return factorzation;
}
