#include <iostream>
#include <algorithm>

unsigned long long arr[1000001];
unsigned long long n,m;
unsigned long long result;

unsigned long long check(unsigned long long value) {
  unsigned long long cnt = 0;
  for (unsigned long long i = 0 ; i < n ; i++) {
    cnt += (arr[i] / value);
  }

  return cnt;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cin >> n >> m;

  for (unsigned long long i = 0 ; i < n; i++) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n);


  unsigned long long st = 1;
  unsigned long long en = *std::max_element(arr, arr + n);

  while (st <= en) {
    unsigned long long mid = (st + en) / 2;

    unsigned long long cnt = check(mid);
    if (cnt >= m && result < mid) {
      result = mid;
      st = mid + 1;
      continue;
    }
    if (cnt < m) {
      en = mid - 1;
    } else if (cnt > m) {
      st = mid + 1;
    }
  }

  std::cout << result;
}


