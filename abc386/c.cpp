#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int levenshteinDistance(const string& S, const string& T);

int main() {
  int K = 1;
  string S, T;
  cin >> K >> S >> T;
  bool canBeMatched = ( levenshteinDistance(S, T) <= K );
  cout << ( canBeMatched ? "Yes" : "No" ) << endl;
  return 0;
}

int levenshteinDistance(const string& S, const string& T) {
  const int sizeOfS = S.size(), sizeOfT = T.size();
  vector<vector<int>> dp(sizeOfS + 1, vector<int>(sizeOfT + 1, 0));
  for ( int i = 1; i <= sizeOfS; i++ ) dp[i][0] = i;
  for ( int j = 1; j <= sizeOfT; j++ ) dp[0][j] = j;
  for ( int i = 1; i <= sizeOfS; i++ ) {
    for ( int j = 1; j <= sizeOfT; j++ ) {
      const int numberOfInsertion = dp[i][j-1] + 1;
      const int numberOfDeletion = dp[i-1][j] + 1;
      const int c = ( S[i-1] != T[j-1] ? 1 : 0 );
      const int numberOfReplacement = dp[i-1][j-1] + c;
      const int minimumNumberOfOperation = min({
        numberOfInsertion,
        numberOfDeletion,
        numberOfReplacement
      });
      dp[i][j] = minimumNumberOfOperation;
    }
  }
  return dp[sizeOfS][sizeOfT];
}
