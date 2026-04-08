#include <iostream>
#include <algorithm>

  long long arr[10000001];
int main() {
  long long n;
  std::cin >> n;

  for (long long i =0 ; i < n ; i ++) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr+n);

  for (long long i = 0 ; i < n ; i ++) {
    std::cout << arr[i] << '\n';
  }
}