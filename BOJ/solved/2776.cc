#include <iostream>
#include <algorithm>
long long note1[100001];
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  long long t;
  std::cin >> t;

  while (t--) {
    long long n;
    std::cin >> n;


    for (long long i = 0 ; i < n ; i ++) {
      std::cin >> note1[i];
    }

    std::sort(note1, note1 + n);

    long long m;
    std::cin >> m;
    for (long long i = 0 ; i < m ; i++) {
      long long t;
      std::cin >> t;
      long long result = 0;
      long long st = 0;
      long long en = n - 1;
      while (st <= en) {
        long long mid = (st + en) / 2;

        if (note1[mid] == t) {
          result = 1;
          break;
        }
        if (note1[mid] > t) {
          en = mid - 1;
        } else if (note1[mid] < t) {
          st = mid + 1;
        }

      }

      std::cout << result << '\n';
    }
  }
}