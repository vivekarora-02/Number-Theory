
class Triplet {

public:
      ll x;
      ll y;
      ll gcd;
};


Triplet extendedEuclids(ll a, ll b) {

      //Base case
      if (b == 0) {
            Triplet res;
            res.gcd = a;
            res.x = 1;
            res.y = 0;

            return res;
      }


      Triplet smallAns = extendedEuclids(b, a % b);

      Triplet res;
      res.gcd = smallAns.gcd;
      res.x = smallAns.y;
      res.y = smallAns.x - floor(a / b) * (smallAns.y);

      return res;
}

void solve() {
      int t; t = 1;
      //cin >> t;
      while (t--) {

            //int n; cin >> n;
            ll a = 16, b = 10;

            Triplet ans = extendedEuclids(a, b);

            cout << ans.gcd << " " << ans.x << " " << ans.y << nline;

      }

}
