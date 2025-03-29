#include <iostream>
using namespace std;

long long factorial(int n);

int main() {
  long long X;
  cin >> X;
  long long N = 0;
  for ( ;; ) {
    if ( factorial(N) == X ) {
      cout << N << endl;
      return 0;
    }
    N++;
  }
  return 0;
}

long long factorial(int n) {
  long long factorial = 1;
  for ( int i = 1; i <= n; i++ ) {
    factorial *= i;
  }
  return factorial;
}
