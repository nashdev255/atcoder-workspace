#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  ll sum = 0;
  for ( int i = 1; i <= ceil(sqrt(2*1e9-1)); ++i ) {
    sum += i;
    if ( N <= sum ) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
