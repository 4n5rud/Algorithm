#include <iostream>
#include <algorithm>

long long arr[10000001];

int main() {
  std::string n;
  std::cin >> n;

  for (int i = 0 ; i < n.length(); i++) {
    arr[i] = n[i] - '0';
  }

  std::sort(arr, arr + n.length(), std::greater<int>());
  for (int i = 0 ; i < n.length(); i++) {
    std::cout << arr[i];
  }
}