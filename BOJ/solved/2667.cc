#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

bool vis[10001][10001];
std::string arr[10001];
std::vector <int> danjis;
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n;
  std::cin >> n;

  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, 1, 0, -1};



  for (int i = 0 ; i < n; i++) {
    std::cin >> arr[i];
  }
  int cnt = 0;
  for (int i = 0 ; i < n; i++) {
    for (int j = 0 ; j < n; j++) {
      if (arr[i][j] == '1' && !vis[i][j]) {
        cnt++;
        std::queue<std::pair<int, int>> q;
        q.push(std::make_pair(i, j));
        vis[i][j] = true;
        int area = 1;
        while (!q.empty()) {
          std::pair<int, int> p = q.front();
          q.pop();
          for (int k = 0 ; k < 4 ; k++) {

            int nx = p.first + dx[k];
            int ny = p.second + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n ) continue;
            if (arr[nx][ny] != '1' || vis[nx][ny] == true) continue;

            q.push(std::make_pair(nx, ny));
            vis[nx][ny] = true;
            area ++;
          }

        }
        danjis.push_back(area);
      }
    }
  }

  std::sort(danjis.begin(), danjis.end());
  std::cout << cnt << '\n';
  for (int i = 0 ; i < danjis.size(); i++) {
    std::cout << danjis[i] << '\n';
  }
}
