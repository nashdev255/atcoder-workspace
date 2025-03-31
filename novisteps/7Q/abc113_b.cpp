#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double averageDegree(double T, double x) {
  double ad = T - x * 0.006;
  return ad;
}

int main() {
  int N;
  double T, A;
  cin >> N >> T >> A;
  vector<double> H(N);
  for ( auto& h : H ) {
    cin >> h;
    h = abs(A - averageDegree(T, h));
  }
  double minnum = *min_element(H.begin(), H.end());
  for ( int i = 0; i < N; ++i ) {
    if ( H[i] == minnum ) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
