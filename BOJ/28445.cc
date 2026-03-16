#include <iostream>
#include <algorithm>

const int SIZE = 4;

std::string sontype(std::string body, std::string tail) {
  return body + " " + tail;
}

int main() {
  std::string parents[SIZE];

  std::cin >> parents[0] >> parents[1] >> parents[2] >> parents[3];

  std::string son[100];
  int sonidx = 0;
  for (int i = 0 ; i < SIZE; i++) {
    for (int j = 0 ; j < SIZE; j++) {
      std::string soncolor = sontype(parents[i], parents[j]);

      if (std::count(begin(son), end(son), soncolor) == 0) {
        son[sonidx]= (soncolor);
        sonidx++;
      }
    }
  }

  sort(son, son + sonidx);
  for (int i = 0; i <sonidx; i++) {

    std::cout << son[i] << '\n';
  }

}

