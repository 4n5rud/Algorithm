#include <iostream>
#include <algorithm>
int main() {
  long long n, m;
  std::cin >> n >> m;

  int ramp[m] = {0};
  for (long long i = 0; i < n; i++) {
    long long cnt;
    std::cin >> cnt;
    for (long long j = 0 ; j < cnt ; j++) {
        long long t;
        std::cin >> t;

        ramp[t - 1]++;
    }
  }

  for (long long i = 0; i < m; i++) {
    if (!(ramp[i] >= 2)) {
      std::cout << 0;
      return 0;
    }

  }
  std::cout << 1;
}