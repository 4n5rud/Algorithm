#include <iostream>
#include <queue>


int main() {
  int n;
  std::cin >> n;

  std::queue<int> q;

  for (int i = 1; i <= n; i++) {
    q.push(i);
  }
  int cnt = 0;
  while (q.size() > 1) {

    if (cnt % 2 == 0) {
      q.pop();
      cnt++;
      continue;
    }

    int tmp = q.front();
    q.pop();

    q.push(tmp);
    cnt++;

  }

  std::cout << q.front() << std::endl;


}