

int gcd(int a, int b) {
// Given a>b
      if (b > a) {
            gcd(b, a);
      }
      if (b == 0) {
            return a;
      }

      return gcd(b, a % b);
}

ll reduceB(ll a, string s) {
      ll mod = 0;

      for (ll i = 0; i < s.length(); ++i) {
            mod = (mod * 10 + s[i] - '0') % a;
      }
      return mod;
}

ll gcdLarge(ll a, string b) {

      ll num = reduceB(a, b);
      return gcd(a, num);
}

