#include <iostream>
#include <algorithm>
#include <functional>

int arr[1000001];
int n;

int main() {

  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::cin >> n;
  for (int i = 0 ; i < n ; i ++) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr+n, std::greater<int>());

  for (int i = 0 ; i < n ; i ++) {
    std::cout << arr[i] << '\n';
  }
}