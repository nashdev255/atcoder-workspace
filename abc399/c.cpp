#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

class UnionFind {
  private:
    vector<int> parent;

  public:
    UnionFind(int N) {
      parent = vector<int>(N, -1);
    }

    int root(int A) {
      if ( parent[A] < 0 ) return A;
      return parent[A] = root(parent[A]);
    }

    int size(int A) {
      return -parent[root(A)];
    }

    bool connect(int A, int B) {
      A = root(A);
      B = root(B);
      if ( A == B ) return false;
      if ( size(A) < size(B) ) swap(A, B);
      parent[A] += parent[B];
      parent[B] = A;

      return true;
    }
};

int main() {
  int N, M;
  cin >> N >> M;
  UnionFind uf(N);
  int ans = 0;
  rep(i,M) {
    int u, v;
    cin >> u >> v;
    --u; --v;
    if ( uf.root(u) == uf.root(v) ) ++ans;
    uf.connect(u,v);
  }
  cout << ans << endl;
  return 0;
}
