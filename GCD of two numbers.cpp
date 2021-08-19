
//Euclid's Theorem
//Time complexity = O(log base 2 (max(a,b)))

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
