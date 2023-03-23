#include <bits/stdc++.h>
#include <string>

int main() {
  int n, d;
  std::cin >> n >> d;
  int visited[n];
  int jumps = 0;
  std::string s;
  std::cin >> s;

  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }

  std::queue<int> pq;
  pq.push(0);

  while (!pq.empty()) {
    jumps++;
    int q_length = pq.size();
    for (int j = 0; j < q_length; j++) {
      int node = pq.front();
      // need to traverse adjacent nodes to node
      int start_i = node - d;
      if (start_i < 0)
        start_i = 0;
      int end_i = node + d;
      if (end_i >= n)
        end_i = n - 1;

      // traverse nodes in level
      for (int i = start_i; i <= end_i; i++) {
        if (visited[i] == 0 && s[i] == '1') {
          // i is an adjacent node
          if (i == n - 1) {
            std::cout << jumps << std::endl;
            return 0;
          }
          pq.push(i);
          visited[i] = 1;
        }
      }

      pq.pop();
    }
  }
  std::cout << -1 << std::endl;
  return 0;
}
