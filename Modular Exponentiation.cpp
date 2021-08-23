
ll modularExponination(ll a, ll b, ll m) {
      if (a == 0) {
            return 0;
      }
      if (b == 0) {
            return 1;
      }
      ll ans = 0;
      if (b % 2 == 0) {
            ll smallAns = modularExponination(a, (b / 2), m);
            ans  = (smallAns * smallAns) % m;
            ans = (ans);
      } else {
            ll smallAns = modularExponination(a, (b - 1), m);
            ans  = a % m;
            ans = ((ans * smallAns) % m);
      }

      return int((ans + m) % m);

}
