#include <iostream>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  long long n,m;
  std::cin >> n >> m;

  long long count[100001];

  for (long long i = 0 ; i < n ; i++) {
    std::cin >> count[i];
  }

  long long st = count[0];
  long long en = *std::max_element(count, count + n);
  // long long result = 0;
  // while (st <= en) {
  //   long long mid = (st + en) / 2;
  //
  //   long long cnt = 0;
  //   long long bank = 0;
  //   int flag = 0;
  //   for (long long i = 0 ; i < n ; i++) {
  //     if (bank >= count[i]) {
  //       bank -= count[i];
  //       continue;
  //     }
  //     if (mid >= count[i]) {
  //       bank = mid - count[i];
  //       cnt++;
  //     } else {
  //       st = mid + 1;
  //       flag = 1;
  //       break;
  //     }
  //   }
  //
  //   if (flag) {
  //     continue;
  //   }
  //
  //   if (cnt == m) {
  //     result = mid;
  //     break;
  //   }
  //   else if (cnt >= m) {
  //     en = mid - 1;
  //   } else {
  //     st = mid + 1;
  //   }
  // }

  std::cout << en;

}