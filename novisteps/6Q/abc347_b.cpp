#include <iostream>
#include <string>
#include <set>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  set<string> st{};
  for ( int i = 1; i <= N; ++i ) {
    for ( int j = 0; j < N-i+1; ++j ) {
      const string subset(S.substr(j, i));
      st.emplace(subset);
    }
  }
  const int res = st.size();
  cout << res << endl;
  return 0;
}
