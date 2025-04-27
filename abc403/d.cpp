#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

/*
* Dであまりをとったときに余りが変化するものをmapのkeyとし、
* あまりがkeyになるA[i]をmap<int, vector<int>>::secondにemplace_back()する
* [0,10^6]の区間で、map[key].second[i]∈key+D*n(n:整数)となり、
* かつ、map[key].second[i]をソートすることで昇順となるので、
* そこから各項の差を考えてresに足し引きしていけばよい。
* ただ、D=0の場合と、D=2, A={3, 3, 5, 5, 5, 5, 5, 7, 7}のような場合に
* 3と7を消した方が良いのにも関わらず、5を消してしまうので、
* そういったケースを考える必要がある
*/

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  map<int, int> cnts{};
  rep(i,N) {
    if ( A[i]%D != A[i] ) ++cnts[A[i]%D];
  }
  map<int, vector<int>> mp{};
  rep(i,N) {
    if ( cnts.count(A[i]%D) ) mp[A[i]%D].emplace_back(A[i]);
  }
  for ( auto& m : mp ) sort(m.second.begin(), m.second.end());
  int res = 0;
  for ( auto& m : mp ) {
    bool c = false;
    rep(i,m.second.size()-1) {
      if ( m.second[i+1] - m.second[i] == D ) {
        ++res;
        if ( c ) {
          --res;
          c = false;
        }
        c = true;
      } else {
        c = false;
      }
    }
  }
  cout << res << endl;
  return 0;
}
