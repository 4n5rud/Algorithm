#include <iostream>
#include <algorithm>

long long arr[100001];
long long n;

long long check(long long value) {
  long long t = 0;
  for (long long i = 0 ; i < n ; i++) {
    if (arr[i] <= value) {
      t += arr[i];
    } else if (arr[i] > value) {
      t += value;
    }
  }
  return t;
}
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::cin >> n;

  for (long long i = 0 ; i < n ; i ++) {
    std::cin >> arr[i];
  }

  long long max;
  std::cin >> max;

  std::sort(arr, arr+n);

  long long st = 1;
  long long en = arr[n - 1];

  long long result = -1;
  while (st <= en) {
    long long mid = (st+en) / 2;

    long long t = check(mid);
    if (t <= max) {
      result = mid;
      st = mid + 1;
    } else {
      en = mid - 1;
    }
  }

  std::cout << result;

}