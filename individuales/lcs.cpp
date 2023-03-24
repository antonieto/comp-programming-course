#include <bits/stdc++.h>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  // Implement lcs and print string result

  int n = s1.length();
  int m = s2.length();
  int dp[n + 1][m + 1];

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      } else if (s1[i - 1] == s2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  std::string result = "";
  int i = n, j = m;
  while (i > 0 && j > 0) {
    if (s1[i - 1] == s2[j - 1]) {
      result = s1[i - 1] + result;
      i--;
      j--;
    } else if (dp[i - 1][j] > dp[i][j - 1]) {
      i--;
    } else {
      j--;
    }
  }

  std::cout << result << std::endl;
  return 0;
}
