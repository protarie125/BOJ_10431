#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll p;
vl lst;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> p;
  for (auto i = 1; i <= p; ++i) {
    ll x;
    cin >> x;

    lst = vl(20);
    for (auto&& v : lst) {
      cin >> v;
    }

    cout << x << ' ';

    auto ans = 0LL;
    for (auto j = 1; j < 20; ++j) {
      for (auto k = 0; k < j; ++k) {
        if (lst[j] < lst[k]) {
          auto temp = lst[j];
          for (auto u = j; k < u; --u) {
            lst[u] = lst[u - 1];
            ++ans;
          }
          lst[k] = temp;
        }
      }
    }

    cout << ans << '\n';
  }

  return 0;
}