#include <iostream>
#include <algorithm>

bool custom_compare(std::string a, std::string b) {
  if (a.length() < b.length()) {
    return a.length() < b.length();
  } else if (a.length() == b.length()) {

  }
}
std::string arr[10001];
int main() {
  int n;
  std::cin >> n;

  for (int i = 0 ; i < n ; i++) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n);

  for (int i = 0 ; i < n ; i++) {
    std::cout << arr[i] << '\n';
  }
}