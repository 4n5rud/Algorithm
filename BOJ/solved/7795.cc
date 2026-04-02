#include <iostream>
#include <algorithm>

int main() {
  long long t;
  std::cin >> t;
  while (t--) {
    long long n, m;
    std::cin >> n >> m;

    long long arr[n];
    for (long long i = 0 ; i < n ; i ++) {
      std::cin >> arr[i];
    }
    std::sort(arr, arr+n);

    long long cnt = 0;
    for (long long i = 0 ; i < m ; i ++) {
      long long a;
      std::cin >> a;

      long long st = 0;
      long long en = n;

      long long mid;
      while (st < en) {
        mid = (st + en) / 2;

        if (arr[mid] <= a) {
          st = mid + 1;
        } else {
          en = mid;
        }
      }


      if (arr[en] == a) {
        cnt += n - en - 1;
      } else {
        cnt += n - en;
      }
    }
    std::cout << cnt << '\n';
  }

}