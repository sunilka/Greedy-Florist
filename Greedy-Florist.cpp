#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {

  int N, K;
  cin >> N >> K;
  vector<int> C(N);
  for (int i = 0; i < N; i++) {
    cin >> C[i];
  }
  /*
   * The way I understand it, the "greedy" applies to the florist, not to the
   * algorithm used to solve the challenge. My solution presented here passed.
   * The algorithm to minimize cost for your group to purchase N flowers:
   * 1. Buy the first K most expensive flowers at their lowest prices each
   * (which is 1 X c_i.)
   * 2. Buy the second K most expensive flowers  at 2 X c_i each
   * 3. ...
   * 4. Buy the last (i.e. the m) K most expensive flowers at m X c_i each.
   */
  sort(C.begin(), C.end(), greater<int>());
  int result = 0, m;
  for (int i = 0; i < N; i++) {
    m = floor(i / K) + 1;
    result += C[i] * m;
  }
  cout << result << std::endl;

  return 0;
}
