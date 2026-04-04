#include <iostream>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n,m;
  std::cin >> n >> m;

  int B[100001];
  for (int i = 0; i < n; i++) {
    std::cin >> B[i];
  }

  std::sort(B, B + n);

  for (int i = 0; i < m; i++) {
    int t;
    std::cin >> t;

    int idx = std::lower_bound(B, B + n, t) - B;

    if (idx < n && B[idx] == t) {
      std::cout << idx;
    } else {
      std::cout << -1;
    }
    std::cout << '\n';

  }
}