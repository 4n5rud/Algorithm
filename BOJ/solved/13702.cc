#include <iostream>
#include <algorithm>
long long kettles[1000001];

int main() {
  long long n, m;

  std::cin >> n >> m;


  for (long long i = 0; i < n; i++) {
    std::cin >> kettles[i];
  }

  std::sort(kettles, kettles + n);
  long long st = 1;
  long long en = kettles[n-1];

  long long result = 0;
  while (st <= en) {
    long long mid = (st+en) / 2;

    long long total = 0;
    for (long long i = 0 ; i < n ; i++) {
      total += kettles[i] / mid;
    }

    if (total < m) {
      en = mid - 1;
    } else {
      st = mid + 1;
      result = mid;
    }
    
  }

  std::cout << result;
}