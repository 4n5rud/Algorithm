#include <iostream>
#include <algorithm>
long long arr[1000001];
int main() {
  long long n, m;
  std::cin >> n >> m;


  for (long long i = 0 ; i < m ; i ++) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + m);

  long long st = 1;
  long long en = arr[m-1];
  long long result = 0;
  while (st <= en) {
    long long mid = (st+en)/ 2;

    long long total = 0;
    for (long long i = 0 ; i < m; i++) {
      total += arr[i] / mid;
    }

    if (total >= n) {
      result = mid;
      st = mid + 1;
    } else {
      en = mid - 1;
    }

  }

  std::cout << result;
}