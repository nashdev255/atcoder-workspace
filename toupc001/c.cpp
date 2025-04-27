#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  string A, B;
  int N;
  cin >> A >> B >> N;
  map<string, int> S{};
  rep(i,N) {
    string s;
    cin >> s;
    S[s] = i;
  }
  cout << abs(S[A]-S[B])-1 << endl;
  return 0;
}
