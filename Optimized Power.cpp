
ll optimizedPower(ll n, ll x) {

      if (x == 1) {
            return n;
      }

      if (x % 2 == 0) {
            return optimizedPower(n, x / 2) * optimizedPower(n, x / 2);
      } else {
            return optimizedPower(n, x / 2) * optimizedPower(n, x / 2) * n;
      }
      return 0;
}
